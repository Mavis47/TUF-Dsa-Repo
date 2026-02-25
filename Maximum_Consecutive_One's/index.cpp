#include <iostream>
#include <vector>
using namespace std;

int maximumConsecutive(vector<int> &nums){
    int freq=0;
    int maxFreq=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 1){
            freq++;
            maxFreq = max(maxFreq,freq);
        }else{
            freq=0;
        }
    }
    return maxFreq;
    
}

int main(){
    vector<int> nums = {1,1,0,0,1,1,1,0};
    cout<<maximumConsecutive(nums);
    return 0;
}