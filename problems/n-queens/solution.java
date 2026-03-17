class Solution {
    void solve(char board[][],boolean colf[],boolean d1f[],boolean d2f[],int row,List<List<String>> ans, int n){
        if (row==n){
            List<String> curr=new ArrayList<>();
            for (int r=0;r<n;r++){
                StringBuilder sb=new StringBuilder();
                for (int c=0;c<n;c++){
                    if (board[r][c]=='Q'){
                        sb.append('Q');
                    }
                    else{
                        sb.append('.');
                    }
                }
                curr.add(sb.toString());
            }
            ans.add(curr);
        }
        for (int col=0;col<n;col++){
            if (colf[col] || d1f[row+col] || d2f[n-1-row+col]){
                continue;
            }
            colf[col]=d1f[row+col]=d2f[n-1-row+col]=true;
            board[row][col]='Q';
            solve(board,colf,d1f,d2f,row+1,ans,n);
            colf[col]=d1f[row+col]=d2f[n-1-row+col]=false;
            board[row][col]='.';
        }
    }
    public List<List<String>> solveNQueens(int n) {
        boolean colf[]=new boolean[n];
        boolean d1f[]=new boolean[2*n-1];
        boolean d2f[]=new boolean[2*n-1];
        List<List<String>> ans=new ArrayList<>();
        char board[][]=new char[n][n];
        solve(board,colf,d1f,d2f,0,ans,n);
        return ans;
    }
}