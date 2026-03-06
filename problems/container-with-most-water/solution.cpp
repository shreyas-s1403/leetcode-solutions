class Solution {
public:
    int maxArea(vector<int>& height) {
         int left=0,right=height.size()-1;
         int maxwater=0;
         while (left<right){
            int water=min(height[right],height[left])*(right-left);
            maxwater=max(maxwater,water);
            if (height[left]<=height[right]) left++;
            else right--;
         }
         return maxwater;
    }
};
