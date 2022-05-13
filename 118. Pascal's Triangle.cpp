class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        
        for(int i=0; i < numRows; i++){
            vector<int> row = vector<int>(i+1, 1);
            
            for(int j=1; j < row.size()-1; j++)
                row[j] = result[i-1][j-1] + result[i-1][j];
            
            result.push_back(row);
        }
        return result;
    }
};