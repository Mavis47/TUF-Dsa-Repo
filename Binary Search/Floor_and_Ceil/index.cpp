#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int Floor(vector<int> &arr,int target){
    int n = arr.size();
    int low = 0,high = n-1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] <= target){
            ans = arr[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int Ceil(vector<int> &arr,int target){
    int n = arr.size();
    int low = 0,high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return arr[low];
}

int main(){
    vector<int> nums = {3, 4, 4, 7, 8, 10};
    int target = 8;
    cout<<Floor(nums, target)<<endl;
    cout<<Ceil(nums, target)<<endl;
    return 0;
}