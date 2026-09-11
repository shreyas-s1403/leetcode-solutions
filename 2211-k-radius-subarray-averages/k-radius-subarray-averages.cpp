class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int>ans(nums.size(),-1);
        if (2*k+1>nums.size()) return ans;
        long long sumleft=0,sumright=0;
        for (int i=0;i<k;i++){
            sumleft+=nums[i];
            sumright+=nums[k+1+i];
        } 
        
        for (int i=k;i<nums.size()-k;i++){
            if (i!=k){
                sumleft-=nums[i-k-1];
                sumleft+=nums[i-1];

                sumright-=nums[i];
                sumright+=nums[i+k];
            } 

            ans[i]=((sumleft+nums[i]+sumright)/(k*2+1));
        }
        return ans;
    }
};