class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right = *max_element(piles.begin(),piles.end());
        while (left<right){
            int mid=(left+right)/2;
            int time=0;
            for (int n:piles){
                time+=(n+mid-1)/mid;
            } 
            if (time>h) left=mid+1;
            
            else right=mid;
        }
        return left;
    }
};