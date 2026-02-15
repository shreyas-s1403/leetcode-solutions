class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int minlen=INT_MAX; 
        for (int i=0;i<nums.size();i++){
            int sum=0;
            for (int j=i;j<nums.size();j++){
                sum=sum|nums[j];
                if (sum>=k){
                    minlen=min(minlen,j-i+1);
                }
            }
        }
        if (minlen==INT_MAX) return -1;
        return minlen;
    }
};