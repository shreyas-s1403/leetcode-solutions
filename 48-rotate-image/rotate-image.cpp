class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int row=0;row<matrix.size();row++){
            for (int col=row;col<matrix[0].size();col++){
                int temp=matrix[row][col];
                matrix[row][col]=matrix[col][row];
                matrix[col][row]=temp;
            }
        }
        for (int row=0;row<matrix.size();row++){
            int st=0,end=matrix[0].size()-1;
            while (st<end){
                int temp=matrix[row][st];
                matrix[row][st]=matrix[row][end];
                matrix[row][end]=temp;
                st++;
                end--;
            }
        }

    }
};