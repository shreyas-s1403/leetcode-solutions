class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxlen=0;
        int sum=0;
        unordered_map<int,int>m;
        m[0]=-1;
        for (int i=0;i<nums.size();i++){
           if (nums[i]==0) sum--; 
           else sum++;
           if (m.find(sum)!=m.end()){
                maxlen=max(maxlen,i-m[sum]);
           }
           else m[sum]=i;
        }
        return maxlen;
    }
};