class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int ans=0;
        mp[0]=1;
        int sum=0;
        for (int n:nums){
            sum+=n;
            if (mp.count(sum-goal)) ans+=mp[sum-goal];
            mp[sum]++;
        }
        return ans;
    }
};