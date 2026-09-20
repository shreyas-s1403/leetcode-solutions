class Solution {
public:
    int longestSubarray(vector<int>& nums) {
    int maxlen=0;
    int left=0;
    vector<int>freq(2,0);
    for (int right=0;right<nums.size();right++){
        freq[nums[right]]++;
        int zeroes=freq[0];
        while (zeroes>1){
            if (nums[left]==0){
                zeroes--;
                freq[nums[left]]--;
            }
            left++;
        }
        maxlen=max(maxlen,right-left);
    }
    return maxlen;
    }
};