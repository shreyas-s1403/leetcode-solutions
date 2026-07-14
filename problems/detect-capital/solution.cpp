class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size()==1) return true;
        int capital=0;
        for (char ch:word){
            if ('A'<=ch && 'Z'>=ch){
                capital++;
            }
        }
        if (capital==0) return true;
        if (capital==word.size() || (word[0]==toupper(word[0]) && capital==1)) return true;
        return false;
    }
};