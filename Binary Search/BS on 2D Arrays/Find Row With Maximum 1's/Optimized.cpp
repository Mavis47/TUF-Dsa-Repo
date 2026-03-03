#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> arr,int n,int x){
    int low = 0,high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low  + high) / 2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &mat,int n,int m){
    int cnt_max = 0;
    int index = -1;
    for(int i=0;i<n;i++){
        int cnt_ones = m - lowerBound(mat[i],m,1);
        if(cnt_ones > cnt_max){
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

int main() {
    vector<vector<int>> mat = {{0,0,0},{1,1,1},{0,0,0}};
    int n = mat.size();
    int m = mat[0].size();
    int result = rowWithMax1s(mat,n,m);
    cout<<"Result :- "<<result;
    return 0;
}