#include <iostream>
#include <vector>
using namespace std;

void RepeatAndMiss(vector<int> &nums){
    int repeat = -1, missing = -1;
    int n = nums.size();

    // Check each number from 1 to n
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == i) {
                cnt++;
            }
        }
        if (cnt == 2) {
            repeat = i;
        } else if (cnt == 0) {
            missing = i;
        }
        if (repeat != -1 && missing != -1) {
            break;
        }
    }

    cout << "Repeating number: " << repeat << endl;
    cout << "Missing number: " << missing << endl;
}

int main(){
    vector<int> nums = {3, 5, 4, 1, 1};  // Example
    RepeatAndMiss(nums);
    return 0;
}
