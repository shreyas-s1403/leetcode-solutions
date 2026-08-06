class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //c= no of values in a row consider them as books
        //r no of rows consider them as shelfs 
        //consider this as a single sorted array
        int r=matrix.size();
        int c=matrix[0].size();
        int low=0,high=r*c-1;
        while (low<=high){
            int mid=(low+high)/2;
            int row=mid/c,col=mid%c;
            if (matrix[row][col]==target) return true;
            else if (matrix[row][col]>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};