#include <iostream>
#include <vector>
using namespace std;

int findFirst(vector<int> &arr, int target) {
    int low = 0, high = arr.size() - 1;
    int first = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            first = mid;
            high = mid - 1; 
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

int findLast(vector<int> &arr, int target) {
    int low = 0, high = arr.size() - 1;
    int last = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int CountOccurence(vector<int> &arr,int target){
    int first = findFirst(arr,target);
    int last = findLast(arr,target);

    return last - first + 1;
}


int main(){
    vector<int> nums = {0,0,1,1,1,1,1,2,3};
    int target = 1;
    cout<<CountOccurence(nums,target);
    return 0;
}