class Solution {
public:
    int beautySum(string s) {
          int n = s.size();
    int totalBeauty = 0;

    // Generate all substrings starting from index i
    for (int i = 0; i < n; i++) {
        unordered_map<char, int> freq;  // Frequency map for characters in the current substring

        // Extend the substring by increasing j
        for (int j = i; j < n; j++) {
            freq[s[j]]++;  // Update frequency of the current character

            // Find max and min non-zero frequencies in the map
            int maxFreq = 0, minFreq = INT_MAX;
            for (auto& entry : freq) {
                maxFreq = max(maxFreq, entry.second);
                minFreq = min(minFreq, entry.second);
            }

            totalBeauty += (maxFreq - minFreq);
        }
    }

    return totalBeauty;
    }
};