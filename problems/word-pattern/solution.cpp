#include <map>
#include <sstream>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> check;
        map<string,char> reverseCheck;
        stringstream ss(s);
        string word;
        int idx = 0;
        while (ss >> word) {
            if (idx >= pattern.length()) return false;
            char p = pattern[idx];
            if (check.count(p)) {
                if (check[p] != word) return false;
            } 
            else {
                if (reverseCheck.count(word)) return false;
                check[p] = word;
                reverseCheck[word] = p;
            }
            idx++;
        }
        return idx == pattern.length();
    }
};