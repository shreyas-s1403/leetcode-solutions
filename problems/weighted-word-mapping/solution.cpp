class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        for (int i=0;i<words.size();i++){
            int wt=0;
            for (char ch:words[i]){
                wt+=weights[ch-'a'];
            }
            res+=(char)(122-wt%26);
        }
        return res;
    }
};