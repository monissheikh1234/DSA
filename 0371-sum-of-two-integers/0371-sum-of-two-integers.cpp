class Solution {
public:
    int getSum(int a, int b) {
          while (b != 0) {
        int carry = a & b;        // Find carry bits
        a = a ^ b;                // Perform addition without carry
        b = carry << 1;           // Shift carry bits to the left by 1
    }
    return a;                     
    }
};