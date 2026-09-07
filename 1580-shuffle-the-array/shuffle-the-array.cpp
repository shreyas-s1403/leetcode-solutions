class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int MOD=1024;
        for (int i=0;i<n;i++){
            nums[i]+=(nums[i+n]%MOD)*MOD;
        }
        for (int i=n-1;i>=0;i--){
            int x=nums[i]%MOD;
            int y=nums[i]/MOD;
        nums[2*i+1]=y;
        nums[2*i]=x;}
        return nums;
    }
};