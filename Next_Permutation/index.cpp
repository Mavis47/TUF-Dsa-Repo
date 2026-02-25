#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void NextPermutation(vector<int> &nums){
    int n=nums.size();
    int ind = -1;
    for(int i=n-2;i>=0;i--){
        if(nums[i] < nums[i+1]){
            ind = i;
            break;
        }
    }

    if(ind == -1){
        reverse(nums.begin(),nums.end());
    }

    for(int i=n-1;i>ind;i--){
        if(nums[i] > nums[ind]){
            swap(nums[i],nums[ind]);
            break;
        }
    }
    reverse(nums.begin() + ind + 1,nums.end());
}

void printArray(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int> nums = {2,1,5,4,3,0,0};
    NextPermutation(nums);
    printArray(nums);
    return 0;
}