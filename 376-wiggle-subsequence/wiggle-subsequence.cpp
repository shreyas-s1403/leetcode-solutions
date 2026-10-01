class Solution {
public:
    int wiggleMaxLength(vector<int>& arr) {
        int up=1,down=1;

        for (int i=1;i<arr.size();i++){
            if (arr[i]-arr[i-1]>0) up=down+1;
            else if (arr[i]-arr[i-1]<0) down=up+1;
        }
        return max(up,down);
    }
};