class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string s1="";
        for (int i=0;i<s.size();i++){
            if (s[i]!=' ') s1+=s[i];
            else if (!s1.empty()){
                words.push_back(s1);
                s1="";
            }
        }
        if (!s1.empty()) words.push_back(s1);
        reverse(words.begin(),words.end());
        s1="";
        for (int i=0;i<words.size();i++){
            s1+=words[i];
            if (i!=words.size()-1) s1+=" ";
        }
        return s1;
    }
};