#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void Swapping(int i,int j,vector<vector<int>> &matrix){
    swap(matrix[i][j], matrix[j][i]);
}

vector<vector<int>> RotateMatrix(vector<vector<int>> &matrix){
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            Swapping(i,j,matrix);
        }
    }
    // Reverse The Matrix
    for(int i=0;i<n;i++){
        int l=0,r=n-1;
        while(l<r){
            swap(matrix[i][l],matrix[i][r]);
            ++l,--r;
        }
    }
    return matrix;
}

int main(){
    vector<vector<int>> nums = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> res = RotateMatrix(nums);

    for(auto &row:res){
        for(auto &x:row){
            cout<<x<<" ";
        }
        cout << "\n";
    }
    return 0;
}
