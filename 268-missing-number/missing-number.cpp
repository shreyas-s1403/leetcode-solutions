class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int idx=0;
        while (idx<nums.size()){
            if (nums[idx]<nums.size() && nums[idx]!=idx){
                int temp=nums[nums[idx]];
                nums[nums[idx]]=nums[idx];
                nums[idx]=temp;
            }
            else idx++;
        }
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=i) return i;
        }
        return nums.size();
    }
};