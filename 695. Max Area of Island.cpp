class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row_size = grid.size(),
            col_size = grid[0].size(),
            area = 0;
        
        for(int i=0; i < row_size; i++){
            for(int j=0; j < col_size; j++){
                int currentArea = AreaDfs(grid, i, j);
                if (currentArea > area) area = currentArea;
            }
                   
        }
        return area;
    }
    
    int AreaDfs(vector<vector<int>> &grid, int row, int col){
        if(row < 0  || col < 0 ||
           row >= grid.size() || col >= grid[0].size() || 
           grid[row][col] == 0)
            return 0;
        
        grid[row][col] = 0;
        
        return AreaDfs(grid, row+1, col) + AreaDfs(grid, row-1, col)
             + AreaDfs(grid, row, col+1) + AreaDfs(grid, row, col-1) + 1;
    }
   
};