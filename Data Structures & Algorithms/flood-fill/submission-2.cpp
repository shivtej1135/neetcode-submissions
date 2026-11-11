class Solution {
public:
    void dfs(vector<vector<int>>& image,vector<vector<bool>> &vis,int i,int j,int color,int oldColor){
        int n = image.size();
        int m = image[0].size();
        vis[i][j] = true;
        image[i][j] = color;
        if(i-1>=0 && !vis[i-1][j] && image[i-1][j]==oldColor) dfs(image,vis,i-1,j,color,oldColor);
        if(j-1>=0 && !vis[i][j-1] && image[i][j-1]==oldColor) dfs(image,vis,i,j-1,color,oldColor);
        if(i+1<n && !vis[i+1][j] && image[i+1][j]==oldColor) dfs(image,vis,i+1,j,color,oldColor);
        if(j+1<m && !vis[i][j+1] && image[i][j+1]==oldColor) dfs(image,vis,i,j+1,color,oldColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int oldColor = image[sr][sc];
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        dfs(image,vis,sr,sc,color,oldColor);
        return image;
    }
};