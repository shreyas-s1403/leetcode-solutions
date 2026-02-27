class Solution {
public:
    void dfs(vector<vector<int>>& grid,int r,int c){
        int row[4]={0,1,0,-1};
        int col[4]={1,0,-1,0};
        grid[r][c]=0;
        for (int i=0;i<4;i++){
            int nr=r+row[i];
            int nc=c+col[i];
            if (nr>-1 && nc>-1 && nr<grid.size() && nc<grid[0].size() && grid[nr][nc]==1){
                dfs(grid,nr,nc);            
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int rw=grid.size();
        int co=grid[0].size();
        int flag=0;
        for (int i=0;i<rw;i++){
            if (grid[i][0]==1){
                dfs(grid,i,0);
            }
            if (grid[i][co-1]){
                dfs(grid,i,co-1);
              
            }
        }
        for (int i=0;i<co;i++){
            if (grid[0][i]==1){
                dfs(grid,0,i);
               
            }
            if (grid[rw-1][i]){
                dfs(grid,rw-1,i);
            
            }
        }
        int count=0;
        for (int i=0;i<grid.size();i++){
            for (int j=0;j<grid[0].size();j++){
                if (grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};