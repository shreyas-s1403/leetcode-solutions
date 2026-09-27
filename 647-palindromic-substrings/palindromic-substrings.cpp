class Solution {
public:

    int isPalindrome(int left,int right,string s){
        int count=0;
        while (left>=0 && right<s.size() && s[left]==s[right]){
            count++;
            left--;
            right++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int n=s.size();
        int ans=0;
        for (int i=0;i<n;i++){
            ans+=isPalindrome(i,i,s);
            ans+=isPalindrome(i,i+1,s);
        }
        return ans;
    }
};