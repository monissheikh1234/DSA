class Solution {
public:
    bool isPalindrome(string s) {
           string normalizedString = "";

    // Step 1: Normalize the string
    for (char c : s) {
        if (isalnum(c)) {
            normalizedString += tolower(c);  // Convert to lowercase and add to the new string
        }
    }

    // Step 2: Check if the string is a palindrome
    int left = 0, right = normalizedString.size() - 1;
    while (left < right) {
        if (normalizedString[left] != normalizedString[right]) {
            return false;  // Not a palindrome
        }
        left++;
        right--;
    }

    return true;  // It's a palindrome
    }
};