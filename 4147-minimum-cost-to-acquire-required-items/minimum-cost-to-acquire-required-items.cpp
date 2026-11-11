class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long c1=1ll*cost1*need1+1ll*cost2*need2;
        long long c2=1ll*max(need1,need2)*costBoth;
        long long c3=1ll*min(need1,need2)*costBoth;
        if (need1>need2) c3+=1ll*(need1-need2)*cost1;
        else if (need2>need1) c3+=1ll*(need2-need1)*cost2;
        return min({c1,c2,c3});
    }
};