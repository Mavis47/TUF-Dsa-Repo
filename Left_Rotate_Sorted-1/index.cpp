#include <iostream>
#include <vector>
using namespace std;

void LeftSortedArray(vector<int> &nums){
    int firstEle = nums[0];
    for(int i=1;i<nums.size();i++){
        nums[i-1] = nums[i];
    }
    nums[nums.size()-1] = firstEle;
}

void printArray(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

int main(){ 
    vector<int> nums = {1,2,3,4,5};
    LeftSortedArray(nums);
    printArray(nums);
    return 0;
}