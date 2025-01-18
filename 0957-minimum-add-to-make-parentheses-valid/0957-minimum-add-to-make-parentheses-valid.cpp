class Solution {
public:
    int minAddToMakeValid(string s) {
            int open = 0;   // Count of unmatched opening parentheses
    int close = 0;  // Count of unmatched closing parentheses

    for (char c : s) {
        if (c == '(') {
            open++;  // Increment open for every '('
        } else { // c == ')'
            if (open > 0) {
                open--;  // Match a '(' with the current ')'
            } else {
                close++; // Increment close when there's no '(' to match
            }
        }
    }

    // Total unmatched parentheses
    return open + close;

    }
};