#include <iostream>
#include <vector>
using namespace std;

int Count_Subarray_XOR(vector<int> &nums,int k){
    int maxlen = 0;
    for(int i=0;i<nums.size();i++){
        int res=0;
        for(int j=i+1;j<nums.size();j++){
            res ^= nums[j];
            if(res == k){
                maxlen = max(maxlen,j-i+1);
            }
        }
    }
    return maxlen;
}

int main(){
    vector<int> nums = {4,2,2,6,4};
    int k = 6;
    cout<<Count_Subarray_XOR(nums,k);
    return 0;
}