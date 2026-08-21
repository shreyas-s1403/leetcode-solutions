class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        unordered_map<string, int> freq;
        string s = "";
        
        for (char &ch : paragraph) {
            if (isalpha(ch)) {
                s += tolower(ch);
            } else if (!s.empty()) {
                if (bannedSet.find(s) == bannedSet.end()) {
                    freq[s]++;
                }
                s = "";
            }
        }
        
        if (!s.empty() && bannedSet.find(s) == bannedSet.end()) {
            freq[s]++;
        }

        string ans = "";
        int maxcnt = 0;
        for (auto &[word, count] : freq) {
            if (count > maxcnt) {
                maxcnt = count;
                ans = word;
            }
        }

        return ans;
    }
};