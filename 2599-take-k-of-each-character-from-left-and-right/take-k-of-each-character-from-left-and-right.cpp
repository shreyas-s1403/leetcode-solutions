class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.size();
        vector<int> total(3, 0);

        for(char c : s)
            total[c-'a']++;

        for(int i=0; i<3; i++)
            if(total[i] < k)
                return -1;

        vector<int> cnt(3, 0);
        int left = 0;
        int longest = 0;

        for(int right = 0; right < n; right++) {
            cnt[s[right]-'a']++;

            while(cnt[0] > total[0]-k ||
                  cnt[1] > total[1]-k ||
                  cnt[2] > total[2]-k) {
                cnt[s[left]-'a']--;
                left++;
            }

            longest = max(longest, right-left+1);
        }

        return n-longest;
    }
};