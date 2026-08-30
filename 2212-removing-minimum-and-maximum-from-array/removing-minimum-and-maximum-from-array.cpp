class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxe=INT_MIN,mine=INT_MAX,maxi=-1,mini=-1;
        int n=nums.size();
        for (int i=0;i<nums.size();i++){
            if (nums[i]>maxe){
                maxe=nums[i];
                maxi=i;
            }
            if (nums[i]<mine){
                mine=nums[i];
                mini=i;
            }
        }
        int right=max(maxi,mini);
        int left=min(maxi,mini);
        int op1=right+1;
        int op2=n-left;
        int op3=(left+1)+(n-right);
        return min({op1,op2,op3});
    }
};