class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxsum=0;
        for (int r=0;r<accounts.size();r++){
            int sum=0;
            for (int c=0;c<accounts[0].size();c++){
                sum+=accounts[r][c];
            }
            if (sum>maxsum) maxsum=sum;
        }
        return maxsum;
    }
};