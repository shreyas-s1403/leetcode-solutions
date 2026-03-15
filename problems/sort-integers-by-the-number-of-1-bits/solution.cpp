class Solution {
public:
    int countBits(int x){
        int count = 0;
        while(x){
            count += x & 1;
            x = x >> 1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> v;
        for(int x : arr){
            v.push_back({countBits(x), x});
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < arr.size(); i++){
            arr[i] = v[i].second;
        }
        return arr;
    }
};