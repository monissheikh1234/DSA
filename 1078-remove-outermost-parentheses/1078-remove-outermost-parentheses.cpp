class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int count = 0;

        for (char c : s) {
            if (c == '(') {
                if (count > 0) result += c; // add only if it's not the outermost '('
                count++;
            } else { // c == ')'
                count--;
                if (count > 0) result += c; // add only if it's not the outermost ')'
            }
        }

        return result;
    }
};
