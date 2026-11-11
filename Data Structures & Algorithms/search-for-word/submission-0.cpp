class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int i,int j,int k){
        int n = board.size();
        int m = board[0].size();
        if(i<0 || j<0 || i>=n ||j>=m){
            return false;
        }
        if(board[i][j]!=word[k]){
            return false;
        }
        if(k==word.size()-1){
            return true;
        }
        char temp = board[i][j];
        board[i][j] = '#';
        bool found = dfs(board, word, i - 1, j, k + 1) ||  // top
                    dfs(board, word, i + 1, j, k + 1) ||  // bottom
                    dfs(board, word, i, j - 1, k + 1) ||  // left
                     dfs(board, word, i, j + 1, k + 1);    // right
        board[i][j] = temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        string ans = "";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                   if(dfs(board,word,i,j,0)) 
                   return true;
                }
            }
        }
        return false;
    }
};
