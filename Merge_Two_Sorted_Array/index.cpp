#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void MergeSortedArray(vector<int> &nums1,int m,vector<int> &nums2,int n){
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i] < nums2[j]){
            nums1[k] = nums2[j];
            j--;
        }else{
            nums1[k] = nums1[i];
            i--; 
        }
        k--;
    }
    while(j>=0){
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main(){
    vector<int> nums1 = {-5,-2,4,5,0,0,0};
    int m = 4;
    vector<int> nums2 = {-3,1,8};
    int n = 3;

    MergeSortedArray(nums1,m,nums2,n);
    for(int x:nums1){
        cout<<x<<" ";
    }
    return 0;
}