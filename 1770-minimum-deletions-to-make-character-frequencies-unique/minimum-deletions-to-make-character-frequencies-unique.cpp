class Solution {
public:
    int minDeletions(string s) {
        vector<int>freq(26,0);
        for (char ch:s) freq[ch-'a']++;

        set<int>count;
        int deletions=0;

        for (int f:freq){
            while (f>0 && count.contains(f)){
                deletions++;
                f--;
            }
            if (f>0) count.insert(f);
        }
        return deletions;
    }
};