#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canweplace(vector<int> &stalls,int dist,int cows){
    int cntcows = 1,last = stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i] - last >= dist){
            cntcows++;
            last = stalls[i];
        }
        if(cntcows >= cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls,int cows){
    sort(stalls.begin(),stalls.end());
    int n = stalls.size();
    int low = 1,high = stalls[n-1] - stalls[0];
    while(low<=high){
        int mid = low + (high - low)/2;
        if(canweplace(stalls,mid,cows) == true){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return high;
}

int main(){
    vector<int> nums = {0, 3, 4, 7, 10, 9};
    int cows = 4;
    int res = aggressiveCows(nums,cows);
    cout<<"Result :- "<<res;
    return 0;
}