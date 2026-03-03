#include <iostream>
#include <vector>
using namespace std;

bool SearchmatIn2D(vector<vector<int>> &mat,int target){
    for(int i=0;i<mat.size();i++){
        int low = 0;
        int high = mat[i].size()-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(mat[i][mid] == target){
                return true;
            }
            if(mat[i][mid] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
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