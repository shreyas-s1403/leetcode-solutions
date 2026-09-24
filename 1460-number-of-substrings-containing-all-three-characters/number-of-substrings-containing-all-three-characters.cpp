class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastA=-1,lastB=-1,lastC=-1;
        int count=0;
        for (int i=0;i<s.size();i++){
            if (s[i]=='a') lastA=i;
            if (s[i]=='b') lastB=i;
            if (s[i]=='c') lastC=i;

            int cnt=min({lastA,lastB,lastC});
            if (cnt!=-1) count+=cnt+1;
        }
        return count;
    }
};