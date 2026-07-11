class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;

        for (int idx = 0; idx < patterns.size(); idx++) {
            bool found = false;

            if (patterns[idx].size() > word.size())
                continue;

            for (int i = 0; i <= word.size() - patterns[idx].size(); i++) {
                int j = 0;

                while (j < patterns[idx].size() &&
                       word[i + j] == patterns[idx][j]) {
                    j++;
                }

                if (j == patterns[idx].size()) {
                    found = true;
                    break;
                }
            }

            if (found)
                count++;
        }

        return count;
    }
};