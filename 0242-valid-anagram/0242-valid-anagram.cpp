class Solution {
public:
    bool isAnagram(string s, string t) {
  unordered_map<char, int> umap1;  // Map for string s
    unordered_map<char, int> umap2;  // Map for string t

    // If sizes don't match, it's not an anagram
    if (s.size() != t.size()) {
        return false;
    }

    // Count frequency of characters in both strings
    for (int i = 0; i < s.size(); i++) {
        umap1[s[i]]++;
        umap2[t[i]]++;
    }

    // Compare both maps
    for (auto& entry : umap1) {
        if (umap2[entry.first] != entry.second) {
            return false;
        }
    }

    return true;


    }
};