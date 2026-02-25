#include <iostream>
#include <vector>
using namespace std;

vector<int> RearrangeBySign(vector<int> nums){
    int posIndex = 0;
    int negIndex = 1;
    for(int i=0;i<nums.size();i++){
        if(nums[i] > 0){
            nums[posIndex] = nums[i];
            posIndex += 2;
        }else{
            nums[negIndex] = nums[i];
            negIndex += 2;
        }
    }
    return nums;
}

int main() {
    vector<int> nums = {2, 4, 5, -1, -3, -4};
    vector<int> ans = RearrangeBySign(nums);

    for (int x : ans) cout << x << " ";
    return 0;
}