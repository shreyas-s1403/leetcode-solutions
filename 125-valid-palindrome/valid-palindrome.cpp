class Solution {
public:
    bool isPalindrome(string s) {
        string pal="";
        for (char ch:s){
            if (isalnum(ch)) pal+=tolower(ch);
        }
        int left=0,right=pal.size()-1;
        while (left<=right){
            if (pal[left]!=pal[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};