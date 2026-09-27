class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string s1=s;
        reverse(s1.begin(),s1.end());
        vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1));

        for (int i=0;i<dp.size();i++){
            dp[i][0]=0;
        }
        for (int j=0;j<dp[0].size();j++){
            dp[0][j]=0;
        }
        for (int row=1;row<dp.size();row++){
            for (int col=1;col<dp[0].size();col++){
                if (s[row-1]==s1[col-1]){
                    dp[row][col] = 1 + dp[row-1][col-1];
                }
                else {
                    dp[row][col] = max(dp[row-1][col],dp[row][col-1]);
                }
            }
        }
        return dp[s.size()][s.size()];
    }
};