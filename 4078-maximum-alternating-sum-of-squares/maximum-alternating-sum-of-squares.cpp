
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return 1LL * a * a > 1LL * b * b;
        });

        long long sum = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i < (n + 1) / 2)
                sum += 1LL * nums[i] * nums[i];
            else
                sum -= 1LL * nums[i] * nums[i];
        }

        return sum;
    }
};
