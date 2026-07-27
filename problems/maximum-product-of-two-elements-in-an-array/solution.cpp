class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        for (int n : nums) {

            if (n >= max1) {
                max2 = max1;
                max1 = n;
            }
            else if (n >= max2) {
                max2 = n;
            }

            if (n <= min1) {
                min2 = min1;
                min1 = n;
            }
            else if (n < min2) {
                min2 = n;
            }
        }
        max1=max1-1;
        max2=max2-1;
        min1--;
        min2--;
        return max(max1*max2,min1*min2);
    }
};