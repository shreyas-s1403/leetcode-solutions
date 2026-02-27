class Solution {
public:
    void dfs(vector<vector<int>>& land,int r,int c, int &maxr,int &maxc){
        land[r][c]=0;
        maxr = max(maxr, r);
        maxc = max(maxc, c);
        int row[2]={0,1};
        int col[2]={1,0};
        for (int i=0;i<2;i++){
            int nr=r+row[i];
            int nc=c+col[i];
            if (nr>=0 && nc>=0 &&
                nr<land.size() && nc<land[0].size() &&
                land[nr][nc]==1){
                dfs(land,nr,nc,maxr,maxc);
            }
        }
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> cr;
        for (int r=0;r<land.size();r++){
            for (int c=0;c<land[0].size();c++){
                if (land[r][c]==1){
                    int maxr=r, maxc=c;
                    dfs(land,r,c,maxr,maxc);
                    cr.push_back({r,c,maxr,maxc});
                }
            }
        }
        return cr;
    }
};