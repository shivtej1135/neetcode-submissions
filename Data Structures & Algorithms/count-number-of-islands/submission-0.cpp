class Solution {
public:
    void dfs(vector<vector<char>>& grid,vector<vector<bool>> &vis,int i,int j){
        int n = grid.size();
        int m = grid[0].size();
        if(i>=n || j>=m || i<0 || j<0 || grid[i][j]=='0' || vis[i][j]){
            return;
        }
        vis[i][j]=true;
        dfs(grid,vis,i-1,j);
        dfs(grid,vis,i+1,j);
        dfs(grid,vis,i,j-1);
        dfs(grid,vis,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m =grid[0].size();
        int ans= 0;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    dfs(grid,vis,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};
