class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>pos,neg;
       for (int n:nums){
            if (n>0) pos.push_back(n);
            else neg.push_back(n);
       } 
       for (int i=0;i<pos.size();i++){
        nums[2*i]=pos[i];
        nums[2*i+1]=neg[i];
       }
       return nums;
    }
};