#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> unionSortedArray(vector<int> &nums1,vector<int> &nums2){
    int i=0,j=0;
    set<int> s;
    int n=nums1.size(),m=nums2.size();
    while(i<n && j<m){
        if(nums1[i] < nums2[j]){
            s.insert(nums1[i]);
            i++;
        }
        else if(nums1[i] > nums2[j]){
            s.insert(nums2[j]);
            j++;
        }else{
            s.insert(nums1[i]);
            i++;
            j++;
        }
    }
    while(i<n){
        s.insert(nums1[i]);
        i++;
    }
    while(j<m){
        s.insert(nums2[j]);
        j++;
    }

    return vector<int>(s.begin(),s.end());
}



int main(){
    vector<int> nums1 = {1,2,3,4,5};
    vector<int> nums2 = {1,2,7};
    vector<int> res = unionSortedArray(nums1,nums2);
    for(int x:res){
        cout<<x<<" ";
    }

    return 0;
}