class Solution {
public:
    string reverseStr(string s, int k) {
        if (s.size()==1) return s;
        if (s.size()<k){
            reverse(s.begin(),s.end());
            return s;
        }
        for (int i=0;i<s.size();i=i+k*2){
            reverse(s.begin()+i,s.begin()+min(i+k,(int)s.size()));
        }
        return s;
    }
};