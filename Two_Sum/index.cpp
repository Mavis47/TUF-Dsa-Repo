#include <iostream>
#include <vector>
using namespace std;

pair<int,int> two_sum(vector<int> nums,int target){
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i] + nums[j] == target){
                return {nums[i],nums[j]};
            }
        }
    }
}

int main(){
    vector<int> nums = {1,6,2,10,3};
    int target = 16;
    pair<int,int> res = two_sum(nums,target);
    cout<<res.first<<" "<<res.second;
    return 0; 
}