class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9), columns(9), squares(9);
        
        for(int i=0; i < 9; i++){
            for(int j=0; j < 9; j++){
                char c = board[i][j];
                if(c != '.')
                    if(rows[i].find(c) != rows[i].end() ||
                      columns[j].find(c) != columns[i].end() ||
                      squares[(i/3)*3+(j/3)].find(c) != squares[(i/3)*3+(j/3)].end())
                        return false;
                     else{
                         rows[i].insert(c);
                         columns[j].insert(c);
                         squares[(i/3)*3+(j/3)].insert(c);
                     }
            }
        }
        return true;
    }
};