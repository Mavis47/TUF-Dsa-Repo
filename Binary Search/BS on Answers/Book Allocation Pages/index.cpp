#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int countStudents(vector<int> &arr,int pages){
    int students = 1;
    long long pagesStudent = 0;
    for(int i=0;i<arr.size();i++){
        if(pagesStudent + arr[i] <= pages){
            pagesStudent += arr[i];
        }else{
            students += 1;
            pagesStudent = arr[i];
        }
    }
    return students;
}

int findPages(vector<int> &arr, int m){
    int n = arr.size();
    if(m>n) return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid = low + (high - low)/2;
        int students = countStudents(arr,mid);
        if(students>m){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return low;
}

int main(){
    vector<int> nums = {12, 34, 67, 90};
    int m = 2;
    int res = findPages(nums,m);
    cout<<"Result :- "<<res;
    return 0;
}