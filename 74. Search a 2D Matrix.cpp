class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i < matrix.size(); i++){
            if(target <= matrix[i][matrix[i].size()-1]){
                int l = 0, r = matrix[i].size()-1, m;
                while(l <= r){
                    m = l + (r - l) / 2;
                    if(matrix[i][m] == target) return true;
                    else if(matrix[i][m] < target) l = m + 1;
                    else r = m - 1;
                }
                return false;
            }
        }
        return false;
    }
};