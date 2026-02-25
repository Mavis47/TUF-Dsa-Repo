#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int singleNumber(vector<int>& nums){
    int result = 0;
    for(int x:nums){
        result = result ^ x;
    }
    return result;
}

int main(){
    vector<int> nums = {1,2,2,4,3,1,4};
    cout<<singleNumber(nums);
}