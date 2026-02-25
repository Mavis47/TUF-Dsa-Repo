#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> RepeatAndMissing(vector<int> nums){
    int n = nums.size();
    int hashArr[n+1] = {0};
    for(int i=0;i<n;i++){
        hashArr[nums[i]]++;
    }
    int repeating = -1,missing = -1;
    for(int i=1;i<n;i++){
        if(hashArr[i] == 2) repeating = i;
        else if(hashArr[i] == 0) missing = i;

        if(repeating != -1 && missing != -1){
            break;
        }
    }
    return {repeating,missing};
}

int main(){
    vector<int> vec = {3,5,4,1,1};
    vector<int> res = RepeatAndMissing(vec);
    for(int x:res){
        cout<<x<<",";
    }
    return 0;
}
