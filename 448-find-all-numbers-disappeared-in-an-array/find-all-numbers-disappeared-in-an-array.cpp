class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>disappear;
        int idx=0;
        while (idx<nums.size()){
            if (nums[idx]!=nums[nums[idx]-1]) swap(nums[idx],nums[nums[idx]-1]);
            else idx++;
        }
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=i+1) disappear.push_back(i+1);
        }
        
        return disappear;
    }
};