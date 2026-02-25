// Better Approach

#include <iostream>
#include <vector>
using namespace std;

int ElementMerge(vector<int> &arr1,vector<int> &arr2,int k){
    int cnt = 1;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i=0,j=0;
    int flag = -1;
    while(i<n1 && j<n2){
        if(arr1[i] < arr2[j]){
            if(cnt == k){
                flag = arr1[i];
            } 
            cnt++;
            i++;
        }else{
            if(cnt == k){
                flag = arr2[j];
            }
            cnt++;
            j++;
        }
    }
    return flag;
}

int main() {
    vector<int> arr1 = {1,3,7};
    vector<int> arr2 = {2,4,6,8,10};
    int k = 5;
    int res = ElementMerge(arr1,arr2,k);
    cout<<res;
    return 0;
}