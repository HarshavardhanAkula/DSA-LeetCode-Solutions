class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        long long sum = 0;
        long long ans = 0;

        // Build the first window
        for (int i = 0; i < k; i++) {
            sum += nums[i];
            freq[nums[i]]++;
        }

        // Check the first window
        if (freq.size() == k)
            ans = sum;

        // Slide the window
        int l=0;
        for (int i = k; i < nums.size(); i++) {

            // Add new element
            sum += nums[i];
            freq[nums[i]]++;

            // Remove old element
            sum -= nums[l];
            freq[nums[l]]--;

            if (freq[nums[l]] == 0)
                freq.erase(nums[l]);

            // Update answer if all elements are distinct
            if (freq.size() == k)
                ans = max(ans, sum);
                l++;
        }

        return ans;
    }
};