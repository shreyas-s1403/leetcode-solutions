class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>freq;
        for (char ch:jewels) freq[ch]=0;
        for (char ch:stones){
            if (freq.find(ch)!=freq.end()){
                freq[ch]++;
            }
        }
        int ans=0;
        for (auto it:freq) ans+=it.second;
        return ans;
    }
};