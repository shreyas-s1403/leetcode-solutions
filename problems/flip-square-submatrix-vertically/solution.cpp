class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for (int col=y;col<y+k;col++){
            int st=x,end=x+k-1;
            while (st<end){
                int temp=grid[st][col];
                grid[st][col]=grid[end][col];
                grid[end][col]=temp;
                st++;
                end--;
            }
        }
        return grid;
    }
};