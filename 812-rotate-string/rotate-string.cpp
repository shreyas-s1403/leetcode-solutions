class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size()!=goal.size()) return false;
        s+=s;
        for (int i=0;i<s.size()-goal.size();i++){
            int j;
            for (j=0;j<(int)goal.size();j++){
                if (s[i+j]!=goal[j]) break;
            }
            if (j==goal.size()) return true;
        }
        return false;
    }
};