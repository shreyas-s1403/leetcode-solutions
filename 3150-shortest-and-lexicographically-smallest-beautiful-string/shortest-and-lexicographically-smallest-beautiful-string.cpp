class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        vector<int>ones;
        string ans="";
        for (int i=0;i<n;i++){
            if (s[i]=='1') ones.push_back(i);
            if (ones.size()>=k){
                int j=ones[ones.size()-k];
                string sub=s.substr(j,i-j+1);
                if (ans.empty()||sub.length()<ans.length()||(sub.length()==ans.length() && sub<ans)) ans=sub;
            }
        }
        return ans;
    }
};