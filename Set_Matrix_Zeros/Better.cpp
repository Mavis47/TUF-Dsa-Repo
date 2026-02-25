#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> SetZerosMatrix(vector<vector<int>> &nums,int n,int m){
    int RowArray[n] = {0};
    int ColArray[m] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(nums[i][j] == 0){
                RowArray[i] = 1;
                ColArray[j] = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(RowArray[i] || ColArray[j]){
                nums[i][j] = 0;
            }
        }
    }
    return nums;
}

int main(){
    vector<vector<int>> nums = {{1,1,1},{1,0,1},{1,1,1}};
    int n = nums.size();
    int m = nums[0].size();
    vector<vector<int>> res = SetZerosMatrix(nums,n,m);
    for(auto x: res){
        for(auto it: x){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    return 0;
}