#include <iostream>
#include <vector>
using namespace std;

// Method-1 :- T.C = O(n) S.C = O(n)

int Second_largest_Ele(vector<int> &nums){
    int lrgst = nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i] > lrgst){
            lrgst = nums[i];
        }
    }
    vector<int> diff;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != lrgst){
            diff.push_back(lrgst - nums[i]);
        }
    }

    int sml = diff[0];
    for(int i=1;i<diff.size();i++){
        if(diff[i] < sml){
            sml = diff[i];
        }
    }
    return lrgst - sml;
}

int main(){
    vector<int> nums = {8,8,2,2,10,10,10};
    int res = Second_largest_Ele(nums);
    cout<<res;
    return 0;
}