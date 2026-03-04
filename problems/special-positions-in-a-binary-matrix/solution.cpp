class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] == 1) {
                    bool special = true;
                    for (int k = 0; k < mat[0].size(); k++) {
                        if (k != j && mat[i][k] == 1) {
                            special = false;
                            break;
                        }
                    }
                    for (int l = 0; l < mat.size() && special; l++) {
                        if (l != i && mat[l][j] == 1) {
                            special = false;
                            break;
                        }
                    }
                    if (special)
                        count++;
                }
            }
        }

        return count;
    }
};