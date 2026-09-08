class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>nos;
        for (int n:nums) nos.insert(n);
        if (nos.size()==nums.size()) return false;
        return true;
    }
};