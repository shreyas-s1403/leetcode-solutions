class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>freq;
        for (string s:words) freq[s]++;
        
        vector<string>ans;
        for (auto it:freq){
            ans.push_back(it.first);
        }

        sort(ans.begin(),ans.end(),[&](string &a,string &b){
            if (freq[a]==freq[b]) return a<b;
            return freq[a]>freq[b];
        });
        ans.resize(k);
        return ans;
    }
};