#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> Majority_Element(vector<int> &nums){
    vector<int> res;
    unordered_map<int,int> freq;
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    for(auto it:freq){
        if(it.second > nums.size()/3){
            res.push_back(it.first);
        }
    }
    return res;
}

int main(){
    vector<int> vec = {1, 2, 1, 1, 3, 2};
    vector<int> res = Majority_Element(vec);
    for(int it:res){
        cout<<it<<" ";
    }
    return 0;
}