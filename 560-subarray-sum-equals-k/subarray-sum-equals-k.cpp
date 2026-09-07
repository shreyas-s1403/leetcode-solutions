class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int csum=0,count=0;
        unordered_map<int,int>m;
        m[0]=1;
        for (int v:nums){
            csum+=v;
            if (m.find(csum-k)!=m.end()){
                count+=m[csum-k];
            }
            if (m.find(csum)==m.end()) m[csum]=1;
            else m[csum]++;
        }
        return count;
    }
};