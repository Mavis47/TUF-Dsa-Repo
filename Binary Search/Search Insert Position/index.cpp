#include <iostream>
#include <vector>
using namespace std;

int SearchInsertPosition(vector<int> &nums,int target){
    int low = 0,high = nums.size() - 1;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] <= target){
            low = mid+1;
        }else{
            high = mid - 1;
        }
    }
    return low;
}

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 5;
    cout<<SearchInsertPosition(nums, target);
    return 0;
}