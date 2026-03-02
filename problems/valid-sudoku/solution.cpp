class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>>rf(9,vector<bool>(10,false));
        vector<vector<bool>>cf(9,vector<bool>(10,false));
        vector<vector<bool>>smf(9,vector<bool>(10,false));
        for (int r=0;r<board.size();r++){
            for (int c=0;c<board[0].size();c++){
                int digit=board[r][c]-'0';
                if (board[r][c]=='.') continue;
                int si=(r/3)*3 + (c/3);
                if (rf[r][digit] || cf[c][digit] || smf[si][digit]){
                    return false;
                }
                else{
                    rf[r][digit]=true;
                    cf[c][digit]=true;
                    smf[si][digit]=true;
                }
            }
        }
        return true;
    }
};