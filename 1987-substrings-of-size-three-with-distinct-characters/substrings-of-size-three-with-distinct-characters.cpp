class Solution {
public:
    int countGoodSubstrings(string s) {
        map<int,int> freq;
        string s1="";
        int count=0;
        for (int i=0;i<3;i++){
            freq[s[i]]++;
            s1+=s[i];
        }
        if (freq.size()==3) count++;
        for (int i=3;i<s.size();i++){
            s1.erase(0,1);
            freq[s[i-3]]--;
            s1+=s[i];
            freq[s[i]]++;
            if (freq[s[i-3]]==0) freq.erase(s[i-3]);
            if (freq.size()==3) count++;
        }
        return count;
    }
};