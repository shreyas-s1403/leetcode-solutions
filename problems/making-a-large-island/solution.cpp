class Solution {
public:
    int dfs(vector<vector<int>>& grid,int r,int c,int count,vector<vector<int>>& vis,vector<int> &islands){
        vis[r][c]=count;
        int no=1;
        int row[4]={0,1,0,-1};
        int col[4]={1,0,-1,0};
        for (int i=0;i<4;i++){
            int nr=r+row[i];
            int nc=c+col[i];
            if (nr>-1 && nc>-1 && nr<grid.size() && nc<grid[0].size() 
                && grid[nr][nc]==1 && vis[nr][nc]==0){
                no+=dfs(grid,nr,nc,count,vis,islands);
            }
        }
        islands[count]=no;
        return no;
    }
    int large(vector<vector<int>>& grid,int r,int c,vector<vector<int>>& vis,vector<int> &islands){
        int newcnt=1;
        int row[4]={0,1,0,-1};
        int col[4]={1,0,-1,0};
        set<int>check;
        for (int i=0;i<4;i++){
            int nr=r+row[i];
            int nc=c+col[i];
            if (nr>-1 && nc>-1 && nr<grid.size() && nc<grid[0].size() && grid[nr][nc]==1){
                check.insert(vis[nr][nc]);
            }
        }
        for (int cnt:check) newcnt+=islands[cnt];
        return newcnt;
    }
    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> vis(n,vector<int>(n,0));
        vector<int> islands(n*n+2,0);
        int count=0;
        int ans=0;
        for (int r=0;r<n;r++){
            for (int c=0;c<n;c++){
                if (grid[r][c]==1 && vis[r][c]==0){
                    count++;
                    ans=max(ans,dfs(grid,r,c,count,vis,islands));
                }
            }
        }
        for (int r=0;r<n;r++){
            for (int c=0;c<n;c++){
                if (grid[r][c]==0){
                    ans=max(ans,large(grid,r,c,vis,islands));
                }
            }
        }
        return ans;
    }
};