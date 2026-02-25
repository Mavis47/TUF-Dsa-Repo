#include <iostream>
#include <vector>
#include <map>
using namespace std;

int longestSubarraySum(vector<int> nums, long long k) {
    map<long long,int> presumMap;
    long long sum = 0;
    int maxlen = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        // case 1: whole subarray from 0...i
        if (sum == k) {
            maxlen = max(maxlen, i + 1);
        }

        // case 2: subarray between indices
        long long rem = sum - k;
        if (presumMap.find(rem) != presumMap.end()) {
            int len = i - presumMap[rem];
            maxlen = max(maxlen, len);
        }

        // store first occurrence of prefix sum
        if (presumMap.find(sum) == presumMap.end()) {
            presumMap[sum] = i;
        }
    }
    return maxlen;
}

int main() {
    vector<int> nums = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    long long k = 6;
    cout << longestSubarraySum(nums, k) << endl;
    return 0;
}
