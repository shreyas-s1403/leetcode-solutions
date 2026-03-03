class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long till=0;
        int patch=0;
        for (int i=0;i<nums.size() && till<=n;i++) {
            while (till<n && till< nums[i]-1) {
                patch++;
                till+=(till+1);
            }
            till+=nums[i];
        }
        while (till<n){
            patch++;
            till+=till+1;
        }
        return patch;
    }
};