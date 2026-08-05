class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Count frequency
        for (char c : s) {
            freq[c]++;
        }

        // Store in vector
        vector<pair<char, int>> v(freq.begin(), freq.end());

        // Sort by frequency (descending)
        sort(v.begin(), v.end(),
             [](pair<char, int> &a, pair<char, int> &b) {
                 return a.second > b.second;
             });

        // Build answer
        string ans = "";

        for (auto it : v) {
            ans += string(it.second, it.first);
        }

        return ans;
    }
};