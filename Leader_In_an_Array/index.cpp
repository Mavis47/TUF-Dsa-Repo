#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> LeaderInAnArray(vector<int> &nums){
    int n=nums.size();
    int maxsofar = nums[n-1];
    vector<int> ans;

    ans.push_back(maxsofar);

    for(int i=n-2;i>=0;i--){
        if(nums[i] > maxsofar){
            ans.push_back(nums[i]);
            maxsofar = nums[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> vec = {1,2,5,3,6,2,4,3};
    vector<int> res = LeaderInAnArray(vec);
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}