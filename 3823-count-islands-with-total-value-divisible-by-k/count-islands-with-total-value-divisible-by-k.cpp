class Solution{
public:
    long long dfs(vector<vector<int>>&grid,int r,int c){
        if(r<0||c<0||r>=grid.size()||c>=grid[0].size()||grid[r][c]==0)
            return 0;

        long long sum=grid[r][c];
        grid[r][c]=0;

        int dr[4]={1,-1,0,0};
        int dc[4]={0,0,1,-1};

        for(int i=0;i<4;i++)
            sum+=dfs(grid,r+dr[i],c+dc[i]);

        return sum;
    }

    int countIslands(vector<vector<int>>&grid,int k){
        int islands=0;

        for(int r=0;r<grid.size();r++){
            for(int c=0;c<grid[0].size();c++){
                if(grid[r][c]>0){
                    long long total=dfs(grid,r,c);
                    if(total%k==0) islands++;
                }
            }
        }
        return islands;
    }
};