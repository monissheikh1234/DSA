class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for (char c : s) {
           if(c=='(' || c=='[' || c=='{'){
            s1.push(c);
           }
           else{
            if(s1.empty()){
                return false;
            }
              // Check for matching bracket
                if (s1.top() == '(' && c == ')') {
                    s1.pop();
                }
                else if (s1.top() == '{' && c == '}') {
                    s1.pop();
                }
                else if (s1.top() == '[' && c == ']') {
                    s1.pop();
                }
                else {
                    s1.push(c); // Mismatched closing bracket
                }
            }
        }
        return s1.empty();
    }
};