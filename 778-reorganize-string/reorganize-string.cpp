class Solution {
public:
    string reorganizeString(string s) {
        vector<int>freq(26,0);
        for (char ch:s) freq[ch-'a']++;
        
        auto cmp = [](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        };

        priority_queue<vector<int>,vector<vector<int>>,decltype(cmp)> pq(cmp);
        for (int i=0;i<26;i++){
            if (freq[i]>0) pq.push({i,freq[i]});
        }
        string ans="";

        while (pq.size()>=2){
            vector<int>a=pq.top();
            pq.pop();
            vector<int>b=pq.top();
            pq.pop();
            ans+=char(a[0]+'a');
            ans+=char(b[0]+'a');
            a[1]--;
            b[1]--;
            if (a[1]>0) pq.push(a);
            if (b[1]>0) pq.push(b);
        }

        if (!pq.empty()){
            vector<int>a=pq.top();
            pq.pop();

            if (a[1]>1){
                return "";
            }
            ans+=char(a[0]+'a');
        }
        return ans;
    }
};