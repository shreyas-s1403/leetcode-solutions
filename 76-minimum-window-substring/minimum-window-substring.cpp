class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> required;
        map<char, int> count;

        for (char c : t)
            required[c]++;

        int left = 0;
        int minlen = INT_MAX;
        int start = 0;
        int formed = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            if (required.count(c)) {
                count[c]++;

                if (count[c] == required[c])
                    formed++;
            }

            while (formed == required.size()) {
                if (right - left + 1 < minlen) {
                    minlen = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];

                if (required.count(leftChar)) {
                    count[leftChar]--;

                    if (count[leftChar] < required[leftChar])
                        formed--;
                }

                left++;
            }
        }

        if (minlen == INT_MAX)
            return "";

        return s.substr(start, minlen);
    }
};
