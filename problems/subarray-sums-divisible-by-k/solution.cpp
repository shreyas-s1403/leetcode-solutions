class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0]=1;
        int prefixSum=0;
        int count=0;
        
        for (int i=0; i<nums.size();i++) {
            prefixSum+=nums[i];
            int remainder = prefixSum % k;
            if (remainder < 0)
                remainder += k;
            if (mp.find(remainder) != mp.end()) {
                count += mp[remainder];
            }
            mp[remainder]++;
        }
        return count;
    }
};
