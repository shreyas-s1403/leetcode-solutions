class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum=nums[0],maxsum=nums[0],minsum=nums[0];
        int currmax=nums[0],currmin=nums[0];
        for (int i=1;i<nums.size();i++){
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