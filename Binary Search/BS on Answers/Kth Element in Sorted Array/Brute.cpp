// Brute force

#include <iostream>
#include <vector>
using namespace std;

int ElementInSortedArray(vector<int> &arr1,vector<int> &arr2,int k){
    int i=0,j=0;
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> arr3;
    while(i<n1 && j<n2){
        if(arr1[i] < arr2[j]) {
            arr3.push_back(arr1[i]);
            i++;
        }else{
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n1) arr3.push_back(arr3[i++]);
    while(j<n2) arr3.push_back(arr3[j++]);
    
    for(int i=0;i<arr3.size();i++){
        if(i==k){
            return arr3[i-1];
        }
    }
    return -1;
}

int main() {
    vector<int> a = {1,3,7};
    vector<int> b = {2,4,6,8};
    int k=5;
    int res = ElementInSortedArray(a,b,k);
    cout<<res;

    return 0;
}