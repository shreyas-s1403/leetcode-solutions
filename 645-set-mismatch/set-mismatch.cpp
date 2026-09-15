class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int idx=0;
        while (idx<nums.size()){
            int correct=nums[idx]-1;
            if (nums[idx]!=nums[correct]){
                swap(nums[idx],nums[correct]);
            }
            else idx++;
        }
        
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=i+1) return {nums[i],i+1};
        }
        return {-1,-1};
    }
};