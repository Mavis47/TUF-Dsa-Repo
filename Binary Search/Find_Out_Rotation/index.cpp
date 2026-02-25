#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int FindRotation(vector<int> &nums){
    int low = 0,high = nums.size() - 1;
    int ans = INT_MAX;
    int index = -1;
    while(low <= high){
        int mid = low + (high - low)/2;

        if(nums[low] <= nums[high]){
            if(nums[low] < ans){
                index = low;
                ans = nums[low];
            }
            break;
        }

        //left half is sorted
        if(nums[low] <= nums[mid]){
            if(nums[low] < ans){
                index = low;
                ans = nums[low];
            }
            low = mid + 1;
        }
        // Right half is sorted
        else{
            high = mid - 1;
            if(nums[mid] < ans){
                index = mid;
                ans = nums[mid];
            }
        }
    }
    return index;
}

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    cout<<FindRotation(nums)<<endl;
    return 0;
}