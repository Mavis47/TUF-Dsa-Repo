#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> RepeatAndMissing(vector<int> nums){
    int n = nums.size();
    long long SN = (n*(n+1))/2;
    long long S2N = (n*(n+1)*(2*n+1))/6;
    long long S=0,S2=0;

    for(int i=0;i<n;i++){
        S += nums[i];
        S2 += (long long) nums[i] * (long long) nums[i];
    }
    long long Val1 = S-SN;
    long long Val2 = S2-S2N;

    Val2 = Val2/Val1;
    long long x = (Val1 + Val2) / 2;
    long long y = x - Val1;

    return {(int)x,(int)y};
}

int main(){
    vector<int> vec = {3,5,4,1,1};
    vector<int> res = RepeatAndMissing(vec);
    for(int x:res){
        cout<<x<<",";
    }
    return 0;
}
