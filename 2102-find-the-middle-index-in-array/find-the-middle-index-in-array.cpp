class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalsum=0;
        for (int n:nums) totalsum+=n;
        int leftsum=0;
        for (int i=0;i<nums.size();i++){
            if (leftsum==totalsum-leftsum-nums[i]) return i;
            leftsum+=nums[i];
        }
        return -1;
    }
};