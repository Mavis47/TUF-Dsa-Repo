#include <iostream>
#include <vector>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>>& mat) {
    vector<int> ans;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j] > mat[i][j++] && mat[i][j] > mat[i++][j]){
                ans.push_back(i);
                ans.push_back(j);
            }
            else if(mat[i][j++] > mat[i][j] && mat[i][j++] > mat[i++][j++]){
                ans.push_back(i);
                ans.push_back(j++);
            }else if(mat[i++][j] > mat[i][j] && mat[i++][0] > mat[i++][j++]){
                ans.push_back(i);
                ans.push_back(j);
            }
            else if(mat[i++][j++] && mat[i++][j] && mat[i++][j++] > mat[i][j++]){
                ans.push_back(i++);
                ans.push_back(j++);
            }
        }
    }
    
}

int main() {
    vector<vector<int>> mat = {{1,4},{3,2}};
    vector<int> res = findPeakGrid(mat);
    cout<<res;
    return 0;
}