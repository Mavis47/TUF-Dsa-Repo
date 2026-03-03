class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix[0].size() - 1;
        int n = matrix.size();
        int m = matrix[0].size();

        while(low <= high){
            int mid = low + (high - low)/2;
            int row = mid / m;
            int col = mid % m;

            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return false;
    }
};