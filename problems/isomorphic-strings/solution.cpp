class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>iso;
        unordered_map<char,int>t1;
        for (int i=0;i<s.size();i++){
            if (iso.find(s[i])!=iso.end()) {
                 if (iso[s[i]]!=t[i]) return false;
            }
            else{
                iso[s[i]]=t[i];
            }
        }
        unordered_set<char>seen_values;
        for (const auto& [key,val]:iso){
            if (!seen_values.insert(val).second){
                return false;
            }
        }
        return true;
        
    }
};