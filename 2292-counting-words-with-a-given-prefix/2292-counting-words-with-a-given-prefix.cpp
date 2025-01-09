class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
           int count = 0;
    int prefLength = pref.length();
    
    for (const std::string& word : words) {
        // Check if the prefix is found at the start of the word
        if (word.rfind(pref, 0) == 0) {  // rfind with pos = 0 checks for prefix
            count++;
        }
    }
    
    return count;

    }
};