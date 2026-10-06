class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum = 0,maxsum = INT_MIN;
        for (int i=0;i<nums.size();i++){
            sum = max(sum+nums[i],nums[i]);
            maxsum = max(maxsum,abs(sum));
            if (sum<0) sum = 0;
        }
        sum = 0;
        int maxnegative=INT_MIN;
        for (int i=0;i<nums.size();i++){
            sum = min(sum+nums[i],nums[i]);
            maxnegative = max(maxnegative,abs(sum));
            if (sum>0) sum = 0;
        }
        return max(maxsum,maxnegative);
    }
};