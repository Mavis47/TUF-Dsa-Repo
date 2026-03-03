// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

bool SearchmatIn2D(vector<vector<int>> &mat,int target){
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<vector<int>> mat = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int target = 8;
    cout<<SearchmatIn2D(mat,target);
    return 0;
}