class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
        vector<int>ans;
        if (s1.size()>s2.size()) return {};
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for (int i=0;i<s1.size();i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        if (v1==v2) ans.push_back(0);
        for (int i=s1.size();i<s2.size();i++){
            v2[s2[i]-'a']++;
            v2[s2[i-s1.size()]-'a']--;
            
            if (v1==v2) ans.push_back(i-s1.size()+1);
        }
        return ans; 
    }
};