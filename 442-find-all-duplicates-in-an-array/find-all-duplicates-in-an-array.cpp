class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>duplicates;
        int idx=0;
        while (idx<nums.size()){
            int correct=nums[idx]-1;
            if (nums[idx]!=nums[correct]) swap(nums[idx],nums[correct]);
            else idx++;
        }
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=i+1) duplicates.push_back(nums[i]);
        }
        
        return duplicates;
    }
};