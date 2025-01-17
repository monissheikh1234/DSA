class Solution {
public:
    bool isPowerOfTwo(int n) {
            if (n <= 0) return false; // Power of two must be positive
    return (n & (n - 1)) == 0;
    }
};