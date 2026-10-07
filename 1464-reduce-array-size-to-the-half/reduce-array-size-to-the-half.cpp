class Solution {
public:
    int minSetSize(vector<int>& arr) {
       map<int,int>mp;
       for (int n:arr) mp[n]++;
       int ans=0;
       priority_queue<int>pq; //max heap by default
       for (auto [no,f]:mp) pq.push(f);
       int removed=0;
       while (removed<arr.size()/2){
        removed+=pq.top();
        pq.pop();
        ans++;
       }  
       return ans;
    }
};