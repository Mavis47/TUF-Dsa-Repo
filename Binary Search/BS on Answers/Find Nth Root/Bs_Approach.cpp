#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int FindNthRoot(int N,int M){
    int low = 1,high = M;
    while(low <= high){
        int mid = low + (high - low)/2;
        long long val = pow(mid,N);
        if(val == M){
            return mid;
        }else if(val > M){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int N=3,M=8;
    cout<<"The Value of X is :- "<<FindNthRoot(N,M);
    return 0;
}