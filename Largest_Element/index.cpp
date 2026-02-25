#include <iostream>
#include <vector>
using namespace std;

int largest_Ele(vector<int> &nums){
    int lrgst = nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i] > lrgst){
            lrgst = nums[i];
        }
    }
    return lrgst;
}

int main(){
    vector<int> nums = {105,1,2,99,0};
    int res = largest_Ele(nums);
    cout<<res;
    return 0;
}