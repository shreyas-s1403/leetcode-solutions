class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
        unordered_map<string,int>freq;
        string s1="";
        for (int i=0;i+9<s.size();i++){
            s1=s.substr(i,10);
            freq[s1]++;
            if (freq[s1]==2) ans.push_back(s1);
        }
        return ans;
    }
};