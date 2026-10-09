class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for (int k=nums.size()-1;k>=2;k--){
            int i=0,j=k-1;
            while (i<j){
                if (nums[i]+nums[j]>nums[k]){
                    ans+=j-i;//all elements in the range of i to j can form triangles
                    j--;
                } 
                else i++;
            }
        }
        return ans;
    }
};