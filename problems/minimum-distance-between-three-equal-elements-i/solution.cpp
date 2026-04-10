class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int, vector<int>> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        int mini = INT_MAX;
        for (auto &it : mp) {
            vector<int> &v = it.second;
            if (v.size() < 3) continue;
            for (int i = 0; i < v.size(); i++) {
                for (int j = i + 1; j < v.size(); j++) {
                    for (int k = j + 1; k < v.size(); k++) {
                        int dist = abs(v[i] - v[j]) + abs(v[j] - v[k]) + abs(v[k] - v[i]);
                        mini = min(mini, dist);
                    }
                }
            }
        }

        return (mini == INT_MAX) ? -1 : mini;
    }
};