class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        
        string prev = countAndSay(n - 1);
        string result = "";
        int j = 0;
        
        while (j < prev.size()) {
            char ch = prev[j];
            int count = 0;
            
            while (j < prev.size() && prev[j] == ch) {
                j++;
                count++;
            }
            
            result += to_string(count) + ch;
        }
        
        return result;
    }
};