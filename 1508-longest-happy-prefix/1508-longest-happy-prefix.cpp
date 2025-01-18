class Solution {
public:
    string longestPrefix(string s) {
          int n = s.size();
    vector<int> lps(n, 0);

    // Build LPS array
    for (int i = 1, len = 0; i < n; ) {
        if (s[i] == s[len]) {
            lps[i++] = ++len;
        } else if (len > 0) {
            len = lps[len - 1];
        } else {
            lps[i++] = 0;
        }
    }

    // Use LPS to determine the longest happy prefix
    int len = lps[n - 1]; // Last value of the LPS array
    return s.substr(0, len); // Extract the prefix of this length
    }
};