#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool IsPossible(vector<int> &nums,int maxSum,int k){
    int currSum = 0,split = 1;
    for(int i=0;i<nums.size();i++){
       if(currSum + nums[i] <= maxSum){
           currSum += nums[i];
       }else{
           split++;
           currSum = nums[i];
       }
    }
    return split<=k;
}

int splitArray(vector<int> &nums,int k){
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(),nums.end(),0);
    while(low <= high){
        int mid = low + (high - low)/2;
        if(IsPossible(nums,mid,k)){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    vector<int> nums = {3,5,1};
    int k = 3;
    int result = splitArray(nums,k);
    cout<<"Result :-"<<result;
}