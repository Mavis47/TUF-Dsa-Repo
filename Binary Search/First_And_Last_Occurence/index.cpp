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

vector<int> searchRange(vector<int> &arr, int target) {
    int first = findFirst(arr, target);
    int last = findLast(arr, target);
    return {first, last};
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 7;
    vector<int> res = searchRange(nums, target);
    for (auto i : res) cout << i << " ";
    return 0;
}
