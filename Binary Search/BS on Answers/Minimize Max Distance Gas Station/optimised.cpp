#include <iostream>
#include <vector>
using namespace std;

int numberofGasStationsRequired(long double dist,vector<int> &arr){
    int cnt = 0;
    for(int i=1;i<arr.size();i++){
        int numberInBetween = ((arr[i] - arr[i-1]) / dist);
        if(arr[i] - arr[i-1] / dist == numberInBetween * dist){
            numberInBetween--;
        }
        cnt += numberInBetween;
    }
    return cnt;
}

long double minimizeMaxDistance(vector<int> &arr,int k){
    int n = arr.size();
    long double low = 0;
    long double high = 0;
    for(int i=0;i<n-1;i++){
        high = max(high,(long double)(arr[i+1] - arr[i]));
    }
    long double diff = 1e-6;
    while(high - low > diff){
        long double mid = low + (high-low)/ (2.0);
        int cnt = numberofGasStationsRequired(mid,arr);
        if(cnt>k){
            low = mid;
        }else{
            high = mid;
        }
    }
    return high;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6 ,7, 8, 9, 10};
    int k=1;
    long double res = minimizeMaxDistance(arr,k);
    cout<<"Result :- "<<res;
    return 0;
}