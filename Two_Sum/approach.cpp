#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int,int> two_sum(vector<int> nums,int target){
    sort(nums.begin(),nums.end());
    int i=0,j=nums.size()-1;
    while(i<j){
        int sum = nums[i] + nums[j];
        if(sum == target){
            return {nums[i],nums[j]};
        }
        if(sum < target){
            i++;
        }else{
            j--;
        }
    }
    return {-1,-1};
}

int main(){
    vector<int> nums = {1,6,2,10,3};
    int target = 16;
    pair<int,int> res = two_sum(nums,target);
    cout<<res.first<<" "<<res.second;
    return 0; 
}