class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        for (int no=mini+1;no<maxi;no++){
            if (find(nums.begin(),nums.end(),no)==nums.end()) ans.push_back(no);
        }
        return ans;
    }
};