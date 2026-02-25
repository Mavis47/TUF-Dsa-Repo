#include <iostream>
#include <vector>
using namespace std;

int MaximumProductSubarray(vector<int> &nums){
    int maxPrd=0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        int currPrd=1;
        for(int j=i;j<n;j++){
            currPrd = currPrd * nums[j];
            maxPrd = max(maxPrd,currPrd);
        }
    }
    return maxPrd;
}

int main(){
    vector<int> nums = {4,5,3,7,1,2};
    int res = MaximumProductSubarray(nums);
    cout<<res;
    return 0;
}