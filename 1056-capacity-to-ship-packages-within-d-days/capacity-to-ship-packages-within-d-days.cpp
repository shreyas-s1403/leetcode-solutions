class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left  = *max_element(weights.begin(), weights.end()); // must fit heaviest
        int right = accumulate(weights.begin(), weights.end(), 0); // all in one day

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Simulate: fill the wagon in order
            int neededDays = 1, load = 0;
            for (int w : weights) {
                if (load + w > mid) {   // wagon full -> next day
                    neededDays++;
                    load = 0;
                }
                load += w;
            }

            if (neededDays <= days) right = mid;  // works, try smaller
            else left = mid + 1;                  // too slow, need bigger
        }
        return left;
    }
};