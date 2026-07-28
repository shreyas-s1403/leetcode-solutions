class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>count;
        for (int n:arr){
            count[n]++;
        }
        set<int>cnt;
        for (auto it:count){
            if (cnt.find(it.second)==cnt.end()) cnt.insert(it.second);
            else return false;
        }
        return true;
    }
};