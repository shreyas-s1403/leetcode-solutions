class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxVal = nums[0];
        
        for (int i = 0; i < nums.size(); i++) {
            maxVal = max(maxVal, nums[i]);
            int minVal = *min_element(nums.begin() + i, nums.end());
            
            if (maxVal - minVal <= k) {
                return i;
            }
        }
        
        return -1;
    }
};