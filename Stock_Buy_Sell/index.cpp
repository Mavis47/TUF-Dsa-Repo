#include <iostream>
#include <vector>
using namespace std;

int stockBuySell(vector<int> nums,int k){
    int mini = nums[0],maxProfit=0;
    for(int i=1;i<nums.size();i++){
        int cost = nums[i] - mini;
        maxProfit = max(maxProfit,cost);
        mini = min(mini,nums[i]);
    }
    return maxProfit;
}

int main(){
    vector<int> nums = {10,7,5,8,11,9};
    int k = nums.size();
    cout<<stockBuySell(nums,k);
    return 0;
}