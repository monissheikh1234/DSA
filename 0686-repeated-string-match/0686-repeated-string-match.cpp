class Solution {
public:
    int repeatedStringMatch(string a, string b) {
          int m = a.size(), n = b.size();

    // Minimum repetitions needed
    int minRepeats = ceil((double)n / m);
    string repeatedA = "";

    // Build repeatedA by appending a, up to minRepeats + 2
    for (int i = 1; i <= minRepeats + 2; ++i) {
        repeatedA += a;
        if (repeatedA.find(b) != string::npos) {
            return i; // Return the count of repetitions
        }
    }

    return -1; // If b is not a substring
    }
};