class Solution {
public:
    bool canPlace(vector<int>& stalls, int cows, int dist) {
        int count = 1; // first cow at first stall
        int lastPos = stalls[0];

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - lastPos >= dist) {
                count++;
                lastPos = stalls[i];
            }
            if (count >= cows) return true;
        }

        return false;
    }

    int maxDistance(vector<int>& stalls, int k) {
        sort(stalls.begin(), stalls.end());

        int low = 1;
        int high = stalls.back() - stalls.front();
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canPlace(stalls, k, mid)) {
                ans = mid;
                low = mid + 1; // try bigger distance
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
