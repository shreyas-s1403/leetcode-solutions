class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string r1="qwertyuiop",r2="asdfghjkl",r3="zxcvbnm";
        vector<string>ans;
        for (int i=0;i<words.size();i++){
            int c1=0,c2=0,c3=0;
            for (char ch:words[i]){
                if (r1.find(tolower(ch))!=string::npos) c1++;
                else if (r2.find(tolower(ch))!=string::npos) c2++;
                else if (r3.find(tolower(ch))!=string::npos) c3++;
            }
            if (c1==words[i].size() || c2==words[i].size() || c3==words[i].size()){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};