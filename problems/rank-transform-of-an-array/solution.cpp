class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>sortarr=arr;
        sort(sortarr.begin(),sortarr.end());
        int rnk=1;
        unordered_map<int,int>rank;
        for (int n:sortarr){
            if (rank.find(n)==rank.end()){
                rank[n]=rnk;
                rnk++;
            }
        }
        for (int i=0;i<arr.size();i++){
            arr[i]=rank[arr[i]];
        }
        return arr;
    }
};