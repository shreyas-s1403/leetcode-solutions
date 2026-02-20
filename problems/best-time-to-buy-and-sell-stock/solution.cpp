class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0,minprice=INT_MAX;
        for (int n:prices){
            if (n<minprice) minprice=n;
            if (n-minprice>maxprofit) maxprofit=n-minprice;
        }
        return maxprofit;
    }
};