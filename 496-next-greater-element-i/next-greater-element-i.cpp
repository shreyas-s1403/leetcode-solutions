class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>nge;
        stack<int>stk;
        
        for (int i=nums2.size()-1;i>=0;i--){
            while (!stk.empty() && stk.top()<=nums2[i]) stk.pop();
            if (stk.empty()) nge[nums2[i]]=-1;
            else nge[nums2[i]]=stk.top();

            stk.push(nums2[i]);
        }
        vector<int>ans;
        for (int n:nums1){
            ans.push_back(nge[n]);
        }
        return ans;
    }
};