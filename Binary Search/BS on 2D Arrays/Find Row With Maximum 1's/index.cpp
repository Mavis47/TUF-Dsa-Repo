class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    int maxCount = 0;
    int rowIndex = -1;
    for(int i=0;i<mat.size();i++){
        int cnt = 0;
        for(int j=0;j<mat[i].size();j++){
            if(mat[i][j] == 1){
                cnt++;
            }
        }
        if(cnt > maxCount){
            maxCount = cnt;
            rowIndex = i;
        }
    }
    return rowIndex;
  }
};