class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>count(26,0);
        int maxlen=0;
        int left=0;
        for (int right=0;right<s.size();right++){
            count[s[right]-'A']++;
            int max_freq=*max_element(count.begin(),count.end());
            int len=right-left+1;
            if (len-max_freq>k){
                count[s[left]-'A']--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};