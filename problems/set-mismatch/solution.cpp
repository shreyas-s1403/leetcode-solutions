class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int repeat=0;
        for (int i=1;i<nums.size();i++){
            if (nums[i]==nums[i-1]){
                repeat=nums[i];
                break;
            }
        }
        for (int i=1;i<=nums.size();i++){
            if (find(nums.begin(),nums.end(),i)==nums.end()){
                return {repeat,i};
            }
        }
        return {-1,-1};
    }
};