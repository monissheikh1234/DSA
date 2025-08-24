class Solution {
public:
    string largestOddNumber(string num) {
        // Iterate from the end of the string towards the start
        for (int i = num.length() - 1; i >= 0; --i) {
            // Check if the current digit is odd
            if (num[i] % 2 != 0) {
                // Return the substring from the start to this position (inclusive)
                return num.substr(0, i + 1);
            }
        }
        // If no odd digit is found, return an empty string
        return "";
    }
};
