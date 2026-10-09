
class Solution {
public:
    bool isValid(string s) {
        int balance = 0;

        for (char ch : s) {
            if (ch == '(') balance++;
            else if (ch == ')') {
                balance--;
                if (balance < 0) return false;
            }
        }

        return balance == 0;
    }

    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        queue<string> q;
        unordered_set<string> vis;

        q.push(s);
        vis.insert(s);

        while (!q.empty()) {
            int size = q.size();
            bool found = false;

            while (size--) {
                string curr = q.front();
                q.pop();

                if (isValid(curr)) {
                    ans.push_back(curr);
                    found = true;
                }

                if (found) continue;

                for (int i = 0; i < curr.size(); i++) {
                    if (curr[i] != '(' && curr[i] != ')')
                        continue;

                    string next = curr.substr(0, i) + curr.substr(i + 1);

                    if (!vis.count(next)) {
                        vis.insert(next);
                        q.push(next);
                    }
                }
            }

            if (found) return ans;
        }

        return ans;
    }
};
