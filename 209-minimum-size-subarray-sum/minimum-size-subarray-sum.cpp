class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0;
        int sum = 0;
        int minlength = INT_MAX;

        while (r < nums.size()) {
            sum += nums[r];
            
            while (sum >= target) {
                minlength = min(minlength, r - l + 1);
                sum -= nums[l];
                l++;
            }

            r++;
        }

        return minlength == INT_MAX ? 0 : minlength;
    }
};