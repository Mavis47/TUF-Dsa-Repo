#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Brute Force Approach

int NthRoot(int N,int M){
    int val = pow(N,N);
    if(val == M) return N;  
    return -1;
}

int main(){
    int N = 2,M=4;
    cout<<NthRoot(N,M);
    return 0;
}