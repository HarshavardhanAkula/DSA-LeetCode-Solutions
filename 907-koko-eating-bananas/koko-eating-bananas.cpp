class Solution {
public:
    int findMax(vector<int>& v) {
        int maxi = INT_MIN;
        for (int i = 0; i < v.size(); i++) {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }

    long long CalTotalHours(vector<int>& v, int hourly) {
        long long TotalH = 0;

        for (int i = 0; i < v.size(); i++) {
            TotalH += (v[i] + hourly - 1) / hourly;   // Integer ceiling
        }

        return TotalH;
    }

    int minEatingSpeed(vector<int>& v, int h) {
        int low = 1;
        int high = findMax(v);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long TotalH = CalTotalHours(v, mid);

            if (TotalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};