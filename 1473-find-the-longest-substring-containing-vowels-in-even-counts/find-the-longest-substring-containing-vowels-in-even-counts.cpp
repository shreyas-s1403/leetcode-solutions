class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int state=0;
        int ans=0;
        for (int i=0;i<s.size();i++){
            char ch=s[i];
            if (ch=='a') state^=1;
            else if (ch=='e') state^=2;
            else if (ch=='i') state^=4;
            else if (ch=='o') state^=8;
            else if (ch=='u') state^=16;

            if (mp.find(state)!=mp.end()){
                ans=max(ans,i-mp[state]);
            }
            else mp[state]=i;
        }
        return ans;
    }
};