#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int Largest_Subarray(vector<int> &nums){
    unordered_map<int,int> mpp;
    int prefixSum = 0;
    int maxlen = 0;
    for(int i=0;i<nums.size();i++){
        prefixSum += nums[i];

        // Edge case
        if(prefixSum == 0){
            maxlen = i+1;
        }
        // Checking if prefixSum is present in map or not
        if(mpp.find(prefixSum) != mpp.end()){
            maxlen = max(maxlen,i-mpp[prefixSum]);
        }else{
            mpp[prefixSum] = i;
        }
    }
    return maxlen;
}

int main(){
    vector<int> vec = {15,-2,2,-8,1,7,10,23};
    cout<<Largest_Subarray(vec);
    return 0;
}