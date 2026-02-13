class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map<int,int>sumcount;
        int sum=0;
        for (int i=0;i<nums.size()-1;i++){
            sum=nums[i]+nums[i+1];
            sumcount[sum]++;
            if (sumcount[sum]==2){
                return true;
            }
        }
        return false;
    }
};