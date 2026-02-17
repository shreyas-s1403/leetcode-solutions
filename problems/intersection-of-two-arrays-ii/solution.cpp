class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp1;
        vector<int> nums3;
        for (int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        int index=0;
        for (int i=0;i<nums2.size();i++){
            if (mp1[nums2[i]]>0){
                nums3.push_back(nums2[i]);
                mp1[nums2[i]]--;
            }
        }
        return nums3;
        
    }
};