class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum=0,maxsum=INT_MIN,minsum=INT_MAX;
        int currmax=0,currmin=0;
        for (int i=0;i<nums.size();i++){
            totalsum+=nums[i];
            
            currmin=min(nums[i],currmin+nums[i]);
            minsum=min(minsum,currmin);

            currmax=max(nums[i],currmax+nums[i]);
            maxsum=max(maxsum,currmax);
        }
        if (maxsum<0) return maxsum;
        return max(maxsum,totalsum-minsum);
    }
};