class Solution {
public:

    long long callHourly(vector<int>& v, int hourly) {
        long long totalH = 0;

        for(int i = 0; i < v.size(); i++) {
            totalH += (v[i] + hourly - 1) / hourly;
        }

        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low <= high) {

            int mid = low + (high - low) / 2;

            long long hours = callHourly(piles, mid);

            if(hours <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};