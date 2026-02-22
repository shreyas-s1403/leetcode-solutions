class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;
        int fresh = 0;

        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                if(grid[r][c]==2)
                    q.push({r,c});
                else if(grid[r][c]==1)
                    fresh++;
            }
        }

        if(fresh==0) return 0;

        int row[4]={0,1,0,-1};
        int col[4]={1,0,-1,0};

        int minutes = -1;

        while(!q.empty()){
            int size=q.size();
            minutes++;

            for(int i=0;i<size;i++){
                auto curr=q.front(); q.pop();

                for(int k=0;k<4;k++){
                    int nr=curr.first+row[k];
                    int nc=curr.second+col[k];

                    if(nr>=0 && nc>=0 && nr<n && nc<m &&
                       grid[nr][nc]==1){

                        grid[nr][nc]=2;
                        fresh--;
                        q.push({nr,nc});
                    }
                }
            }
        }

        return fresh==0 ? minutes : -1;
    }
};