class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> result(r, vector<int>(c));
        int rows = mat.size(), columns = mat[0].size(), rowi=0, columni =0;
        
        //check if the transformation is legal
        if(mat.size()*mat[0].size() != r * c) return mat;
        
        for(int i=0; i < rows; i++){
            for(int j=0; j < columns; j++){
                result[rowi][columni] = mat[i][j];
                columni++;
                if(columni == c){
                    columni = 0;
                    rowi++;
                }
            }
        }
        
        return result;
    }
};