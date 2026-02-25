#include <iostream>
#include <vector>
using namespace std;

vector<int> RearrangeBySign(vector<int> &nums) {
    vector<int> pos,neg;
    for(int i=0;i<nums.size();i++){
        if(nums[i] > 0){
            pos.push_back(nums[i]);
        }else{
            neg.push_back(nums[i]);
        }
    }

    vector<int> ans;
    for(int i=0;i<nums.size()/2;i++){
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 4, 5, -1, -3, -4};
    vector<int> ans = RearrangeBySign(nums);

    for (int x : ans) cout << x << " ";
    return 0;
}
