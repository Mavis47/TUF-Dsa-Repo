#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int LowerBound(vector<int> &arr,int target,int n){
    int low = 0,high = n-1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] >= target){
            ans = mid;
            high = mid-1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,3,6,6,6,7,8,10};
    int x = 6;
    cout<<"First Occurence at index :- "<<LowerBound(arr,x,arr.size());
    return 0;
}