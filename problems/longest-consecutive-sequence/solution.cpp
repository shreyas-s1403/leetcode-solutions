class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==1) return 1;
        if (nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int ans=0;
        int final=1;
        for (int i=1;i<nums.size();i++){
            if (nums[i]==nums[i-1]+1){
                ans++;
            }
            else{
                if (nums[i]!=nums[i-1]){
                    if (ans+1>final) final=ans+1;
                    ans=0;
                }
            }
        }
        if (ans+1>final) final=ans+1;
        return final;
    }
};