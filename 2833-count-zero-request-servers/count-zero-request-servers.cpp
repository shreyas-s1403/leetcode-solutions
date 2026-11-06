class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        sort(logs.begin(),logs.end(),[](const vector<int>&a,const vector<int>&b){
            return a[1]<b[1];
        });
        vector<pair<int,int>>q;
        for (int i=0;i<queries.size();i++){
            q.push_back({queries[i],i});
        }
        sort(q.begin(),q.end());

        vector<int>ans(queries.size());
        vector<int>freq(n+1,0);
        int left=0;
        int right=0;
        int activeServers=0;
        for (int i=0;i<q.size();i++){
            int start=q[i].first-x;
            int end=q[i].first;

            //expanding the window
            while (right<logs.size() && logs[right][1]<=end){
                int server=logs[right][0];
                if (freq[server]==0) activeServers++;
                freq[server]++;
                right++;
            }

            //shrinking the window
            while (left<right && logs[left][1]<start){
                int server=logs[left][0];
                freq[server]--;
                if (freq[server]==0) activeServers--;
                left++;
            }
            ans[q[i].second]=n-activeServers;
        }
        return ans;
    }
};