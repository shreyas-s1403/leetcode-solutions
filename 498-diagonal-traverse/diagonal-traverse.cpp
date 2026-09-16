class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<int>arr(m*n);
        int row=0,col=0;
        int idx=0;
        bool up=true;
        while (row<m && col<n){
            if (up){
                //here always stop when col=n-2 so that to check for last condition else they would create a big error
                while (row>0 && col<n-1){
                    arr[idx++]=mat[row][col];
                    row--;
                    col++;
                }
                arr[idx++]=mat[row][col];
                if (col==n-1) row++;
                else col++;
            }
            else{
                while (row<m-1 && col>0){
                    arr[idx++]=mat[row][col];
                    row++;
                    col--;
                }
                arr[idx++]=mat[row][col];
                if (row==m-1) col++;
                else row++;
            }
            up=!up;
        }
        return arr;
    }
};