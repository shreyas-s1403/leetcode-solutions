class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();

        if (n <= 4) return 0;

        sort(nums.begin(), nums.end());

        int ans = INT_MAX;

        for (int left = 0; left <= 3; left++) {
            int right = 3 - left;
            int diff = nums[n - 1 - right] - nums[left];
            ans = min(ans, diff);
        }

        return ans;
    }
};