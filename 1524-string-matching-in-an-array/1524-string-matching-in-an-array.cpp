class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
         for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words.size(); j++) {
            // Skip the case where the word is compared with itself
            if (i != j && words[j].find(words[i]) != string::npos) {
                result.push_back(words[i]);
                break;  // No need to check further if the word is already found as a substring
            }
        }
    }
    
    return result;
    }
};