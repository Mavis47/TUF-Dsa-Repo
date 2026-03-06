#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMedian(vector<vector<int>>&matrix) {
      vector<int> ans;
      int n = matrix.size();
      int m = matrix[0].size();
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              ans.push_back(matrix[i][j]);
          }
      }
      sort(ans.begin(),ans.end());
      int low = 0;
      int high = ans.size()-1;
      int mid = low + (high - low) / 2;
      return ans[mid];
}

int main() {
    vector<vector<int>> mat = {{1, 4, 9}, {2, 5, 6}, {3, 7, 8} };
    int res = findMedian(mat);
    cout<<res;
    return 0;
}