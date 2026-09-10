class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        int vowel = 0;
        string s1 = "";

        for (int i = 0; i < k; i++) {
            s1 += s[i];

            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                vowel++;
        }

        count = vowel;

        for (int i = k; i < s.size(); i++) {

            if (s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u')
                vowel--;

            s1.erase(0, 1);
            s1 += s[i];

            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                vowel++;

            if (vowel > count)
                count = vowel;
        }

        return count;
    }
};