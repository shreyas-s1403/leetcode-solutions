class Solution {
public:
    //AND with 0 always gives 0 so use -1 which will be 1111... in its 2's complement representation
    int sortPermutation(vector<int>& nums) {
        int ans=-1;
        for (int i=0;i<nums.size();i++){
            if (i!=nums[i]) ans&=nums[i];
        }
        return ans==-1? 0:ans;
    }
};