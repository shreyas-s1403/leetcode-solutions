class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int mini=INT_MAX,maxi=INT_MIN;
        for (int i=1;i<nums.size();i++){
            if (nums[i]<nums[i-1]){
                mini=min(mini,nums[i]);
            }
        }

        for (int i=nums.size()-2;i>=0;i--){
            if (nums[i]>nums[i+1]){
                maxi=max(maxi,nums[i]);
            }
        }
        if (mini==INT_MAX && maxi==INT_MIN) return 0;
        int start=-1,end=-1;
        for (int i=0;i<nums.size();i++){
            if (nums[i]>mini){
                start=i;
                break;
            }
        }

        for (int i=nums.size()-1;i>=0;i--){
            if (nums[i]<maxi){
                end=i;
                break;
            }
        }
        return end-start+1;
    }
};