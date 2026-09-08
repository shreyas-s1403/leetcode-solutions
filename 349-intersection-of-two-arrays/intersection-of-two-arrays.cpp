class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>intersection;
        for (int n:nums1){
            intersection.insert(n);
        }
        vector<int>ans;
        for (int n:nums2){
            if (intersection.find(n)!=intersection.end() && find(ans.begin(),ans.end(),n)==ans.end()) ans.push_back(n);
        }
        return ans;
        
    }
};