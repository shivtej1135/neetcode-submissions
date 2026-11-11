class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int color,int oldColor,vector<vector<bool>> &vis){
        int n = image.size();
        int m = image[0].size();
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j]){
            return;
        }
        if(image[i][j]!=oldColor) return;
        vis[i][j] = true;
        image[i][j] = color;

        dfs(image,i-1,j,color,oldColor,vis);
        dfs(image,i+1,j,color,oldColor,vis);
        dfs(image,i,j-1,color,oldColor,vis);
        dfs(image,i,j+1,color,oldColor,vis);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int oldColor = image[sr][sc];
        dfs(image,sr,sc,color,oldColor,vis);
        return image;
    }
};