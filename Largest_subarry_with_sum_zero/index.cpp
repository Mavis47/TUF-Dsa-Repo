#include <iostream>
#include <vector>
using namespace std;

int largest_Subarray(vector<int> &nums){
    int maxlen = 0;
    for(int i=0;i<nums.size();i++){
        int currSum = 0;
        for(int j=i;j<nums.size();j++){
            currSum += nums[j];
            if(currSum == 0){
                maxlen = max(maxlen,j-i+1);
            }
        }
    }
    return maxlen;
}

int main(){
    vector<int> nums = {15,-2,2,-8,1,7,10,23};
    cout<<largest_Subarray(nums);
    return 0;
}