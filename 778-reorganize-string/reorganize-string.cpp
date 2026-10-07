class Solution {
public:
    string reorganizeString(string s) {
        vector<int>freq(26,0);
        for (char ch:s) freq[ch-'a']++;

        auto cmp = [](const vector<int>&a,const vector<int>&b){
            return b[1]>a[1];
        };
        priority_queue<vector<int>,vector<vector<int>>,decltype(cmp)> pq (cmp);

        for (int i=0;i<26;i++){
            if (freq[i]>0) pq.push({i,freq[i]});
        }

        string result="";
        vector<int>prev;

        while (!pq.empty()){
            vector<int>curr=pq.top();
            pq.pop();
            result+=char('a'+curr[0]);
            curr[1]--;
            if (!prev.empty() && prev[1]>0) pq.push(prev);
            prev=curr;
        }
        if (result.size()!=s.size()) return "";
        return result;
    }
};