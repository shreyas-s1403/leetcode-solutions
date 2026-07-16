class Solution {
public:

    void dfs(int r,int c,int color,vector<vector<int>>&image,int og){
        if (r<0||c<0||r>=image.size()||c>=image[0].size()||image[r][c]!=og){
            return;
        }
        image[r][c]=color;
        dfs(r+1,c,color,image,og);
        dfs(r-1,c,color,image,og);
        dfs(r,c+1,color,image,og);
        dfs(r,c-1,color,image,og);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int og=image[sr][sc];
        if (og==color) return image;
        dfs(sr,sc,color,image,og);
        return image;
    }
};