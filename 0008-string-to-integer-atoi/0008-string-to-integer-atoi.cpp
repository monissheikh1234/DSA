class Solution {
public:
    int myAtoi(string s) {
      int result = 0;  // Stores and returns the integer converted value for s
    int i = 0;
    int digit;
    int n = s.size();
    int sign = 1;  // Determines if the number is positive or negative

    // Ignore leading whitespace
    while (i < n && s[i] == ' ') {
        i++;
    }

    // Check for sign
    if (i < n && (s[i] == '-' || s[i] == '+')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // Traverse the entire string and convert it into an integer
    while (i < n && isdigit(s[i])) {
        digit = s[i] - '0';

        // Check for overflow
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
    }
};