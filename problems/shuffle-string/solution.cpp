class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string temp;
        temp.resize(s.length());
        for (int i=0;i<s.length();i++){
            int val=indices[i];
            temp[val]=s[i];
        }
        return temp;
    }
};