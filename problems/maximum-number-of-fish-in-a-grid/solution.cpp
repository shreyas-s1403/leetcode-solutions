class Solution {
public:
    int dfs(vector<vector<int>>& grid,int r, int c){
        int fish=grid[r][c];
        grid[r][c]=0;
        int row[4]={0,1,0,-1};
        int col[4]={1,0,-1,0};
        for (int i=0;i<4;i++){
            int nr=row[i]+r;
            int nc=col[i]+c;
            if (nr>-1 && nc>-1 && nr<grid.size() && nc<grid[0].size() && grid[nr][nc]>0){
                fish+=dfs(grid,nr,nc);
            }
        }
        return fish;
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int maxfish=0;
        for (int r=0;r<grid.size();r++){
            for (int c=0;c<grid[0].size();c++){
                if (grid[r][c]>0){
                    int res=dfs(grid,r,c);
                    maxfish=max(maxfish,res);
                }
            }
        }
        return maxfish;
    }
};