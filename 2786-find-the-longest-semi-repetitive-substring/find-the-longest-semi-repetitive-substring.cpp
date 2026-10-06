class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int left=0;
        int count=0;
        int ans=1;
        for (int right=1;right<s.size();right++){
            if (s[right]==s[right-1]){
                count++;
            }
            while (count>1){
                if (s[left]==s[left+1]){
                    count--;
                }
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};