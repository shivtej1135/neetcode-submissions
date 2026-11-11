class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<bool>> &vis,int &ans,int i,int j){
        int n = grid.size();
        int m = grid[0].size();
        vis[i][j] = true;
        if(i-1<0) ans = ans+1;
        if(j-1<0) ans = ans +1;
        if(i+1>=n) ans = ans +1;
        if(j+1>=m)  ans = ans +1;
        if(j+1<m && grid[i][j+1]==0) ans = ans + 1;
        if(i+1<n && grid[i+1][j]==0) ans = ans + 1;
        if(i-1>=0 && grid[i-1][j]==0) ans = ans + 1;
        if(j-1>=0 && grid[i][j-1]==0) ans = ans +1;

        if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]==1) dfs(grid,vis,ans,i-1,j); 
        if(i+1<n && !vis[i+1][j] && grid[i+1][j]==1) dfs(grid,vis,ans,i+1,j);
        if(j+1<m && !vis[i][j+1] && grid[i][j+1]==1) dfs(grid,vis,ans,i,j+1);
        if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]==1) dfs(grid,vis,ans,i,j-1);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    dfs(grid,vis,ans,i,j);
                    return ans;
                }
            }
            
        }
        return ans;
    }
};