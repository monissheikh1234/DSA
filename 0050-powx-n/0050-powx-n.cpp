class Solution {
public:
    double myPow(double x, int n) {
        long long power = n; // Use long long to handle edge cases for INT_MIN
    if (power < 0) {
        x = 1 / x;
        power = -power;
    }

    double result = 1.0;
    while (power > 0) {
        if (power % 2 == 1) { // If the current power is odd
            result *= x;
        }
        x *= x; // Square the base
        power /= 2; // Halve the power
    }
    return result;
    }
};