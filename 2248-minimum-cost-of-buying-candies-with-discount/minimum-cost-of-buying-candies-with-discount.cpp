class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int total=0;
        int idx=2;
        for (int i=0;i<cost.size();i++){
            if (idx!=i) total+=cost[i];
            else{
                idx+=3;
                continue;
            }
        }
        return total;
    }
};