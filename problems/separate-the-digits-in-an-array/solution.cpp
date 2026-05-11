class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> sep;

        for (int n : nums) {
            vector<int> temp;

            while (n != 0) {
                temp.push_back(n % 10);
                n /= 10;
            }

            reverse(temp.begin(), temp.end());

            for (int digit : temp) {
                sep.push_back(digit);
            }
        }

        return sep;
    }
};