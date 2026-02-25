#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int CountSubarrayWithSum(vector<int> nums,int k){
    unordered_map<long long,int> freq;
    freq[0] = 1;
    int prefixSum = 0;
    int count = 0;
    for(int i=0;i<nums.size();i++){
        prefixSum += nums[i];
        long long need = prefixSum - k;
        if(freq.find(need) != freq.end()){
            count += freq[need];
        }
        freq[prefixSum]++;
    }
    return count++;
}


int main(){
    vector<int> arr = {1,2,3};
    int k = arr.size();
    cout<<CountSubarrayWithSum(arr,k);
}