class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cnt = 0;

        for(char ch = 'a'; ch <= 'z'; ch++){
            bool lower = find(word.begin(), word.end(), ch) != word.end();

            bool upper = find(word.begin(), word.end(), toupper(ch)) != word.end();

            if(lower && upper){
                cnt++;
            }
        }

        return cnt;
    }
};