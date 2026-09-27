class Solution {
public:

    int isPalindrome(int left,int right, string s, int &start,int ans){
        int length = 0;
        
        while (left>=0 && right<s.size() && s[left]==s[right]){
            length = right-left+1;
            if (length > ans){
                start = left;
            }
            left--;
            right++;
        }
        return length;
    }

    string longestPalindrome(string s) {
        
        int ans = 0;
        int start = 0;
        for (int i=0;i<s.size();i++){
            ans = max (ans,isPalindrome(i,i,s,start,ans));
            ans = max (ans,isPalindrome(i,i+1,s,start,ans));
        }
        return s.substr(start,ans);
        
    }
};