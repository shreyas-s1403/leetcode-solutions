class Solution {
public:
    int longestDecomposition(string text) {
        int left = 0, right = text.size() - 1;
        string l = "", r = "";
        int ans = 0;

        while(left <= right) {
            l += text[left];
            r = text[right] + r;

            if(l == r) {
                if(left == right)
                    ans += 1;
                else
                    ans += 2;

                l = "";
                r = "";
            }

            left++;
            right--;
        }

        if(l != "")
            ans++;

        return ans;
    }
};