#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ReversePairs(vector<int> &nums){
    int count = 0;
    for(int i=0;i<nums.size();i++){
        
        for(int j=i;j<nums.size();j++){
            if(nums[i] > 2*nums[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> nums = {6,4,1,2,7};
    int n = nums.size();
    cout<<ReversePairs(nums);
    return 0;
}