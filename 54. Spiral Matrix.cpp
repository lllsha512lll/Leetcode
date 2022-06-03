class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0, bottom = matrix.size(),
            left = 0, right = matrix[0].size();
        vector<int> result;
        
                
        while(top < bottom && left < right){
            for(int i = left; i < right; i++)
                result.push_back(matrix[top][i]);
            top++;
            
            for(int i = top; i < bottom; i++)
                result.push_back(matrix[i][right-1]);
            right--;
            
            if( !(top < bottom && left < right) ) break; 
            
            for(int i = right-1; i > left-1; i--)
                result.push_back(matrix[bottom - 1][i]);
            bottom--;
            
            for(int i = bottom-1; i > top-1; i--)
                result.push_back(matrix[i][left]);
            left++;
            
                
        }
        
        return result;
    }
};