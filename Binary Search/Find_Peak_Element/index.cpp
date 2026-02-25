#include <iostream>
#include <vector>
using namespace std;

int PeakElement(vector<int> &nums) {
    int n = nums.size();
    int low = 0, high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] < nums[mid + 1]) {
            // We're in the increasing part
            low = mid + 1;
        } else {
            // We're in the decreasing part (or at a peak)
            high = mid;
        }
    }

    return low; // or high (both are same)
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,10,5,1};
    cout << "Peak index: " << PeakElement(nums) << endl;
    return 0;
}

// Example: [3, 4, 5, 3, 2]

// If mid is pointing at 5,
// nums[mid] = 5, nums[mid+1] = 3,
// so it’s decreasing → the peak could be at mid itself!

// So we must keep mid in our search range.