class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size()!=t.size()) return false;
        unordered_map<char,char>map;
        unordered_map<char,char>revmap;
        for (int i=0;i<s.size();i++){
            if ((map.find(s[i])!=map.end() && map[s[i]]!=t[i])||
            (revmap.find(t[i])!=revmap.end() && revmap[t[i]]!=s[i])) 
                return false;
            else {
                map[s[i]]=t[i];
                revmap[t[i]]=s[i];
            }
        }
        return true;
    }
};