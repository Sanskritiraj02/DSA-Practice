class Solution {
public:
    int maxSumSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < k) return -1;

        int windowSum = 0;

        // First window
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        int maxSum = windowSum;

        // Slide the window
        for (int i = k; i < n; i++) {
            windowSum += nums[i];       // add new element
            windowSum -= nums[i - k];   // remove old element
            maxSum = max(maxSum, windowSum);
        }

        return maxSum;
    }
};
