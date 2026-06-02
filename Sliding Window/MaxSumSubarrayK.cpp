class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        int n = nums.size();
        int windowSum = 0;

        // First window
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        int maxSum = windowSum;

        // Slide window
        for (int i = k; i < n; i++) {
            windowSum += nums[i];
            windowSum -= nums[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return maxSum;
    }
};
