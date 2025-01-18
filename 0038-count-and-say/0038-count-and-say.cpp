class Solution {
public:
    string countAndSay(int n) {
         if (n == 1) return "1"; // Base case

    string prev = "1"; // Start with the first term
    for (int i = 2; i <= n; ++i) {
        string curr = "";
        int count = 1;
        for (int j = 1; j < prev.size(); ++j) {
            if (prev[j] == prev[j - 1]) {
                count++; // Increment count if characters are the same
            } else {
                curr += to_string(count) + prev[j - 1]; // Append count and character
                count = 1; // Reset count
            }
        }
        curr += to_string(count) + prev.back(); // Append the last group
        prev = curr; // Update for the next iteration
    }

    return prev;
    }
};