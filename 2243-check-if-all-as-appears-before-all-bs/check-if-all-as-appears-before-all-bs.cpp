class Solution {
public:
    bool checkString(string s) {
        for (int i=0;i<s.size();i++){
            if (i!=0){
                if (s[i]=='a' && s[i-1]=='b')
                    return false;
            }
        }
        return true;
    }
};