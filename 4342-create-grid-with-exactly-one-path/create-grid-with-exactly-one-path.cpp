class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans(m,string(n,'#'));
        for (int col=0;col<n;col++){
            ans[0][col]='.';
        }
        for (int row=0;row<m;row++){
            ans[row][n-1]='.';
        }
        return ans;
    }
};