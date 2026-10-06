class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left=0;
        int sum=0;
        int ans=0;
        unordered_set<int>s;
        for (int right=0;right<nums.size();right++){
            while (s.count(nums[right])){
                sum-=nums[left];
                s.erase(nums[left]);
                left++;
            }
            s.insert(nums[right]);
            sum+=nums[right];
            ans=max(ans,sum);
        }
        return ans;
    }
};