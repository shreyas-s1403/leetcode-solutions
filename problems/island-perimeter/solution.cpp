class Solution{
public:
    int islandPerimeter(vector<vector<int>>&grid){
        int m=grid.size(),n=grid[0].size();
        int row[4]={0,1,0,-1};
        int col[4]={1,0,-1,0};
        int perimeter=0;

        for(int r=0;r<m;r++){
            for(int c=0;c<n;c++){
                if(grid[r][c]==1){
                    for(int i=0;i<4;i++){
                        int nr=r+row[i];
                        int nc=c+col[i];

                        if(nr<0||nc<0||nr>=m||nc>=n||grid[nr][nc]==0)
                            perimeter++;
                    }
                }
            }
        }
        return perimeter;
    }
};