class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>disappear;
        int idx=0;
        while (idx<nums.size()){
            int correct=nums[idx]-1;
            if (nums[idx]!=nums[correct]) swap(nums[idx],nums[correct]);
            else idx++;
        }
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=i+1) disappear.push_back(i+1);
        }
        
        return disappear;
    }
};