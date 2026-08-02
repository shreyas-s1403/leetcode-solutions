class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>freq;
        for (char ch:text){
            if (ch=='b' || ch=='a' || ch=='l' || ch=='o' || ch=='n'){
                freq[ch]++;
            }
        }
        int min_word=min({freq['b'],freq['a'],freq['n'],freq['o']/2,freq['l']/2});
        return min_word;

    }
};