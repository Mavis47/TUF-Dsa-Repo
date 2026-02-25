
#include <iostream>
#include <vector>
using namespace std;

void markCol(vector<vector<int>> &nums,int n,int m,int j){
    for(int i=0;i<n;i++){
        if(nums[i][j] != 0){
            nums[i][j] = -1;
        }
    }
}

void markRow(vector<vector<int>> &nums,int n,int m,int i){
    for(int j=0;j<m;j++){
        if(nums[i][j] != 0){ // 00, 01, 02, 03
            nums[i][j] = -1;
        }
    }
}

vector<vector<int>> SetMatrixZero(vector<vector<int>> &nums,int n,int m){
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(nums[i][j] == 0){
            markRow(nums,n,m,i);
            markCol(nums,n,m,j);
        }
    }
   }
 
   // -1 to 0
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(nums[i][j] == -1){
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
    vector<vector<int>> ans = SetMatrixZero(nums,n,m);
    cout<<"The Final matrix is "<<endl;
    for(auto it: ans){
        for(auto ele: it){
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
