class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<bool>> &vis,int i,int j,int &ans){
        int n = grid.size();
        int m =  grid[0].size();
        vis[i][j] = true;
        if(i-1<0) ans++;
        if(j-1<0) ans++;
        if(j+1>=m) ans++;
        if(i+1>=n) ans++;
        if(i-1 >=0 && grid[i-1][j]==0) ans++;
        if(i+1 <n && grid[i+1][j]==0) ans++;
        if(j-1>=0 && grid[i][j-1]==0) ans++;
        if(j+1<m && grid[i][j+1]==0) ans++;


        if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]==1) dfs(grid,vis,i-1,j,ans);
        if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]==1) dfs(grid,vis,i,j-1,ans);
        if(j+1<m && !vis[i][j+1] && grid[i][j+1]==1)  dfs(grid,vis,i,j+1,ans);
        if(i+1<n && !vis[i+1][j] && grid[i+1][j]==1)  dfs(grid,vis,i+1,j,ans);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    dfs(grid,vis,i,j,ans);
                    return ans;
                    break;
                }
            }
        }
        return ans;
    }
};