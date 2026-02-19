class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charset;
        int left=0;
        int maxlen=0;
        for (int right=0;right<s.length();right++) {
            while (charset.count(s[right])) {
                charset.erase(s[left]);
                left++;
            }
            charset.insert(s[right]);
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};
