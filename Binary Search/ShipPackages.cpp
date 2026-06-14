class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int currDays = 1;
        int load = 0;

        for (int w : weights) {
            if (load + w > capacity) {
                currDays++;
                load = w;
            } else {
                load += w;
            }
        }

        return currDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canShip(weights, days, mid)) {
                high = mid - 1; // try smaller capacity
            } else {
                low = mid + 1; // need more capacity
            }
        }

        return low;
    }
};
