#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeOverlap(vector<vector<int>> &arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(ans.empty() || arr[i][0] > ans.back()[1]){
            ans.push_back(arr[i]);
        }else{
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> nums = {{1,5},{3,6},{8,10},{15,18}};
    vector<vector<int>> res = mergeOverlap(nums);
    for(auto &x:res){
        for(int it: x){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}