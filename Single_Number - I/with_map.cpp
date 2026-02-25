#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//  T.C = O(n)
// S.C = O(n)

int SingleNumber(vector<int> &nums){
    unordered_map<int,int> freq;
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    for(auto &p:freq){
        if(p.second == 1){
            return p.first;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,2,4,3,1,4};
    cout<<SingleNumber(nums);
}