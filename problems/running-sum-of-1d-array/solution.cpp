class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ps(n);

        ps[0] = nums[0];

        for (int i = 1; i < n; i++) {
            ps[i] = ps[i - 1] + nums[i];
        }

        return ps;
    }
};
