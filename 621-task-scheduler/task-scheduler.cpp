class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for (char ch:tasks){
            freq[ch-'A']++;
        }

        auto cmd = [](vector<int> &a, vector<int> &b){
            return a[1] < b[1];
        };

        priority_queue<vector<int>,vector<vector<int>>,decltype(cmd)> pq(cmd);

        for (int i=0;i<26;i++){
            if (freq[i]>0) pq.push({i,freq[i]});
        }

        queue<vector<int>> q;
        int intervals=0;

        while (!pq.empty() || !q.empty()) {

            intervals++;

            if (!q.empty() && q.front()[2] == intervals) {
                pq.push({q.front()[0],q.front()[1]});
                q.pop();
            }

            if (!pq.empty()) {
                vector<int> curr=pq.top();
                pq.pop();

                curr[1]--;

                if (curr[1]>0) {
                    q.push({curr[0],curr[1],intervals+n+1});
                }
            }
        }

        return intervals;
    }
};