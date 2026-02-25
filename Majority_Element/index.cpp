#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int Majority_Element(vector<int> nums){
    unordered_map<int,int> freq;
    int n = nums.size();
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    for(auto it:freq){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {7,0,0,1,7,7,2,7,7};
    cout<<Majority_Element(nums);
    return 0;
}