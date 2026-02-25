#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestConsecutive(vector<int> &nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<int> ans;
    for(int i=0;i<n-1;i++){
        int res = nums[i+1] - nums[i];
        if(res <= 1){
            ans.push_back(nums[i]);
        }
    }
    return ans.size();
}

int main(){
    vector<int> vec = {100,4,200,1,3,2};
    int res = longestConsecutive(vec);
    cout<<res;
    return 0;
}