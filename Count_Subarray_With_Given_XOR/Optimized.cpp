#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int Count_Subarray_XOR(vector<int> &nums,int k){
    int prefixXor = 0,count = 0;
    unordered_map<int,int> freq;
    for(int i=0;i<nums.size();i++){
        prefixXor ^= nums[i];

        if(prefixXor == k){
            count++;
        }
        int need = prefixXor ^ k;
        if(freq.find(need) != freq.end()){
           count += freq[need];
        }

        freq[prefixXor]++;
    }
    return count;
}

int main(){
    vector<int> nums = {4,2,2,6,4};
    int k = 6;
    cout<<Count_Subarray_XOR(nums,k);
    return 0;
}