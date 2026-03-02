class Solution {
public:
    int dfs(int r,int c,vector<vector<int>>& matrix,vector<vector<int>>&path){
        if (path[r][c]!=0) return path[r][c];
        int maxpath=0;
        int row[4]={0,1,0,-1};
        int col[4]={1,0,-1,0};
        for (int i=0;i<4;i++){
            int nr=r+row[i];
            int nc=c+col[i];
            int count=0;
            if (nr>-1 && nc>-1 && nr<matrix.size() && nc<matrix[0].size()&& matrix[nr][nc]>matrix[r][c]){
                int currpath=dfs(nr,nc,matrix,path);
                // path[nr][nc]=path[r][c];
                maxpath=max(maxpath,currpath);
            }
        }
        path[r][c]=maxpath+1;
        return path[r][c];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        vector<vector<int>>path(matrix.size(),vector<int>(matrix[0].size(),0));
        int ans=1;
        for (int r=0;r<matrix.size();r++){
            for (int c=0;c<matrix[0].size();c++){
                path[r][c]=dfs(r,c,matrix,path);
                ans=max(path[r][c],ans);
            }
        }
        return ans;
    }
};