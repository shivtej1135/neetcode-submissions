class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();

        for(int i=0;i<n;i++){
            unordered_set<int>mp;
            for(int j=0;j<m;j++){
                if(board[i][j]!='.'){
                if(mp.find(board[i][j])!=mp.end()){
                    return false;
                }
                mp.insert(board[i][j]);
                }
            }
        }
        for(int i=0;i<m;i++){
            unordered_set<int>mp;
            for(int j=0;j<n;j++){
                if(board[j][i]!='.'){
                    if(mp.find(board[j][i])!=mp.end()){
                    return false;
                }
                mp.insert(board[j][i]);
                }
            }
        }

        

// Outer loops: Iterate over the top-left corner of each 3x3 box
// r and c will be 0, 3, 6 sequentially
for (int r = 0; r < 9; r += 3) {
    for (int c = 0; c < 9; c += 3) {
        unordered_set<int>mp;
        
        // Inner loops: Traverse the 3x3 box starting at (r, c)
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int currentRow = r + i;
                int currentCol = c + j;
                if(board[currentRow][currentCol]!='.'){
                    if(mp.find(board[currentRow][currentCol])!=mp.end()){
                    return false;
                }
                mp.insert(board[currentRow][currentCol]);
                }
            }

            }
        }
}
return true;
    }
};
