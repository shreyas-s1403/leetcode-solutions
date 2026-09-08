class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>count;
        for (int n:nums){
            count.insert(n);
        }
        if (count.size()==nums.size()) return false;
        else return true;
    }
};