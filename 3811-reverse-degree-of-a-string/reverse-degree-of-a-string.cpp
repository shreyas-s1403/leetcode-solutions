class Solution {
public:
    int reverseDegree(string s) {
        vector<int>alpha(27,0);
        for (int i=26;i>=0;i--){
            alpha[i]=26-i;
        }
        int ans=0,idx=1;
        for (char ch:s){
            ans+=idx*(alpha[ch-'a']);
            idx++;
        }
        return ans;
    }
};