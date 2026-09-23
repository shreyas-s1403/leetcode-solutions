class Solution {
public:
    bool isPalindrome(string s) {
        string pal="";
        for (char ch:s){
            if (isalnum(ch)) pal+=tolower(ch);
        }
        string pal1="";
        for (int i=pal.size()-1;i>=0;i--){
            pal1+=pal[i];
        }
        if (pal1==pal) return true;
        return false;
    }
};