class Solution{
public:
    int bfs(vector<vector<int>>&grid,int r,int c){
        int row[4]={0,1,0,-1};
        int col[4]={1,0,-1,0};
        int area=1;
        queue<pair<int,int>> q;
        q.push({r,c});
        grid[r][c]=0;
        while(!q.empty()){
            int size=q.size();
            for (int i=0;i<size;i++){
                auto curr=q.front();
                q.pop();
                int currrow=curr.first;
                int currcol=curr.second;
                for (int index=0;index<4;index++){
                    int newrow=currrow+row[index];
                    int newcol=currcol+col[index];
                    if(newrow>-1 && newcol>-1 && newrow<grid.size() && newcol<grid[0].size()){
                        if (grid[newrow][newcol]==1){
                            area++;
                            grid[newrow][newcol]=0;
                            q.push({newrow,newcol});
                        }
                    }
                }
            }
        }
        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>&grid){
        int islands=0;
        int max_area=0;
        for(int r=0;r<grid.size();r++){
            for(int c=0;c<grid[0].size();c++){
                if(grid[r][c]==1){
                    islands++;
                    max_area=max(max_area,bfs(grid,r,c));
                }
            }
        }
        return max_area;
    }
};