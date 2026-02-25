#include <iostream>
#include <vector>
using namespace std;

vector<int> unionSortedArray(vector<int> &nums1,vector<int> &nums2){
    int i=0,j=0;
    int n=nums1.size();
    int m=nums2.size();
    vector<int> result;
    while(i<n && j<m){
        int candidate;
        if(nums1[i] < nums2[j]){
            candidate = nums1[i++];
        }else if(nums1[i] > nums2[j]){
            candidate = nums2[j++];
        }else{
            candidate = nums1[i];
            i++;
            j++;
        }
        if(result.empty() || result.back() != candidate){
            result.push_back(candidate);
        }
    }
    while(i<n && result.back() != nums1[i]){
        result.push_back(nums1[i]);
        i++;
    }
    while(j<m && result.back() != nums2[j]){
        result.push_back(nums2[j]);
        j++;
    }

    return result;
}

int main(){
    vector<int> nums1 = {3, 4, 6, 7, 9, 9};
    vector<int> nums2 = {1, 5, 7, 8, 8};
    vector<int> res = unionSortedArray(nums1,nums2);
    for(int x:res){
        cout<<x<<" ";
    }

    return 0;
}

