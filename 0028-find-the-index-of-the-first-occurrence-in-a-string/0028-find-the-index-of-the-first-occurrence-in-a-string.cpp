class Solution {
public:
    int strStr(string haystack, string needle) {
         int m = haystack.size(), n = needle.size();
    if (n == 0) return 0; // Edge case: empty needle

    for (int i = 0; i <= m - n; ++i) {
        if (haystack.substr(i, n) == needle) {
            return i; // Found the first occurrence
        }
    }
    return -1; // Needle not found
    }
};