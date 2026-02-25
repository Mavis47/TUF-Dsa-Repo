#include <iostream>
#include <vector>
using namespace std;

int SearchRotatedSortedArray(vector<int> &arr,int target){
    int low = 0,high = arr.size()-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target) return mid;
        if(arr[low] <= arr[mid]){
            if(arr[low] <= target && target < arr[mid]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }else{
            if(arr[mid] < target && target <= arr[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {7,8,9,1,2,3,4,5,6};
    int target = 3;
    cout<<SearchRotatedSortedArray(nums, target)<<endl;
    return 0;
}