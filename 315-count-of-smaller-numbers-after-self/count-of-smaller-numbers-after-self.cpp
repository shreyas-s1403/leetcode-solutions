
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> sorted, ans(nums.size());

        for (int i = nums.size() - 1; i >= 0; i--) {
            int low = 0, high = sorted.size();

            while (low < high) {
                int mid = (low + high) / 2;

                if (sorted[mid] < nums[i]) {
                    low = mid + 1;
                }
                else {
                    high = mid;
                }
            }

            ans[i] = low;
            sorted.insert(sorted.begin() + low, nums[i]);
        }

        return ans;
    }
};
