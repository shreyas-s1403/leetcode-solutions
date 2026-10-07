class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        for (int n:arr) mp[n]++;
        vector<int>freq;
        for (auto [no,f]:mp){
            freq.push_back(f);
        }
        sort(freq.begin(),freq
        .end());
        int unique=freq.size();
        for (int f:freq){
            if (k>=f){
                k-=f;
                unique--;
            }
            else break;
        }
        return unique;
    }
};