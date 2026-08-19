class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        int ans1=0,ans2=0;
        int prev1=0; //max money upto i-1
        int prev2=0; //max money upto i-2
        for (int i=0;i<nums.size()-1;i++){
            int curr=max(prev1,prev2+nums[i]);
            prev2=prev1;
            prev1=curr;
        }
        ans1=prev1;
        prev1=0;
        prev2=0;
        for (int i=1;i<nums.size();i++){
            int curr=max(prev1,prev2+nums[i]);
            prev2=prev1;
            prev1=curr;
        }
        return max(ans1,prev1);

    }
};