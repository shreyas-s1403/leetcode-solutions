class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        vector<int>freq(2,0);
        int maxlen=0;
        int left=0;
        for (int right=0;right<nums.size();right++){
            freq[nums[right]]++;
            int zeroes=freq[0];
            
            if (zeroes>k){
                freq[nums[left]]--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};