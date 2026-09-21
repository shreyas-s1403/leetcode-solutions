class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>map;
        for (char ch:s) map[ch]++;
        int n=s.size();
        vector<vector<char>>bucket(n+1);
        for (auto it:map){
            bucket[it.second].push_back(it.first);
        }
        string ans="";
        for (int i=n;i>=1;i--){
            for (char ch:bucket[i]) ans+=string(i,ch);
        }
        return ans;

    }
};