class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxval=nums[0];
        vector<int>minval(nums.size(),0);
        minval[nums.size()-1]=nums[nums.size()-1];
        for (int i=nums.size()-2;i>=0;i--){
            minval[i]=min(nums[i],minval[i+1]);
        }
        for (int i=0;i<nums.size();i++){
            maxval=max(maxval,nums[i]);
            if (maxval-minval[i] <=k) return i;
        }
        return -1;

    }
};