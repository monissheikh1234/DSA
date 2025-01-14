class Solution {
public:
    bool rotateString(string s, string goal) {
     
    if (s.size() != goal.size()) {
        return false;
    }
    string doubled = s + s;  // Double the string
    return doubled.find(goal) != string::npos;  // Check if goal is a substring

    }
};