class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<int, int> index;
        set<vector<int>> unique;
        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); i++)
            index[nums[i]] = i;

        for (int i = 0; i < nums.size(); i++) {
            int target = nums[i];

            for (int j = i + 1; j < nums.size(); j++) {
                int third = -(target + nums[j]);

                if (index.find(third) != index.end()) {
                    int k = index.find(third)->second;

                    if (k > j) {
                        vector<int> triplet = {target, nums[j], third};
                        sort(triplet.begin(), triplet.end());
                        unique.insert(triplet);
                    }
                }
            }
        }

        for (auto x : unique)
            ans.push_back(x);

        return ans;
    }
};