class Solution {
public:
    int maxPower(string s) {
        int maxcnt=1;
        int count=1;
        for (int i=1;i<s.size();i++){
            if (s[i]==s[i-1])
            count++;
            if (maxcnt<count) maxcnt=count;
            if (s[i]!=s[i-1]) count=1;
        }
        return maxcnt;
    }
};

