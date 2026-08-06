class Solution {
public:

    bool palindrome(string &s,int l,int r){
        while (l<r){
            if (s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int st=0,end=s.size()-1;
        while (st<end){
            if (s[st]!=s[end]){
                return palindrome(s,st+1,end) || palindrome(s,st,end-1);
            }
            st++;
            end--;
        }
        return true;
    }
};