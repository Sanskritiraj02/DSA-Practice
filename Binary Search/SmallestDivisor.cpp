class Solution {
public:
    int computeSum(vector<int>& nums, int divisor) {
        int sum = 0;

        for (int num : nums) {
            sum += ceil((double)num / divisor);
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int sum = computeSum(nums, mid);

            if (sum <= threshold)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};
