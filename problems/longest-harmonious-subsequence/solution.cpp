class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>freq;
        for (int n:nums){
            freq[n]++;
        }
        int max_len=0;
        for (int n:nums){
            if (freq.find(n)!=freq.end() && freq.find(n+1)!=freq.end()){
                max_len=max(max_len,freq[n]+freq[n+1]);
            }
        }
        return max_len;
    }
};