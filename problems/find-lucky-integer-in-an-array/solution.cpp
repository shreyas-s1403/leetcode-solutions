class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>freq;
        for (int n:arr){
            freq[n]++;
        }
        int maxn=-1;
        for (auto it:freq){
            if (it.second==it.first){
                if (maxn<it.first) maxn=it.first;
            }
        }
        return maxn;
    }
};