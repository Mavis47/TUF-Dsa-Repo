#include <iostream>
#include <vector>
using namespace std;

// T.C = O(n^2)
// S.C = O(1)

int longest_Subarray_sum(vector<int> &nums,int k){
    int n=nums.size();
    int maxLen = 0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum += nums[j];
            if (sum == k) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
}

int main(){
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k=15;
    cout<<longest_Subarray_sum(nums,k);
    return 0;
}