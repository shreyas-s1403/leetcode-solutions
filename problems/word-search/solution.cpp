class Solution {
public:
    bool dfs(vector<vector<char>>& board,int r, int c,int idx,string word){
        if (idx==word.size()) return true;
        char temp=board[r][c];
        board[r][c]='0';
        int row[4]={0,1,0,-1};
        int col[4]={1,0,-1,0};
        int f=0;
        for (int i=0;i<4;i++){
            int nr=row[i]+r;
            int nc=col[i]+c;
            if (nr>-1 && nc>-1 && nr<board.size() && nc<board[0].size() && board[nr][nc]==word[idx]){
                if (dfs(board,nr,nc,idx+1,word)){
                    board[r][c]=temp;
                    return true;
                }
            }
        }
        board[r][c]=temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        bool flag= false;
        int idx=1;
        for (int r=0;r<board.size();r++){
            for (int c=0;c<board[0].size();c++){
                if (board[r][c]==word[0]){
                   if(dfs(board,r,c,idx,word)){
                    return true;
                   }
                }
            }
        }
        return flag;
    }
};