class Solution {
public:
    
string frequencySort(string s) {
    // Step 1: Count frequency of each character
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    // Step 2: Move data to vector<pair<char, int>>
    vector<pair<char, int>> vec(freq.begin(), freq.end());

    // Step 3: Sort by frequency (second) in descending order
    sort(vec.begin(), vec.end(), [](const pair<char, int> &a, const pair<char, int> &b) {
        return a.second > b.second;
    });

    // Step 4: Build the result string
    string result;
    for (const auto &p : vec) {
        result.append(p.second, p.first); // append 'char' p.second times
    }

    return result;
}


};
