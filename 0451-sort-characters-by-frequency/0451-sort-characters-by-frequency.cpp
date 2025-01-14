class Solution {
public:
    string frequencySort(string s) {
       // Step 1: Count the frequency of each character
    unordered_map<char, int> freq_map;
    for (char c : s) {
        freq_map[c]++;
    }

    // Step 2: Store the characters and their frequencies in a vector of pairs
    vector<pair<int, char>> freq_vector;
    for (auto& entry : freq_map) {
        freq_vector.push_back({entry.second, entry.first});
    }

    // Step 3: Sort the vector by frequency in descending order
    sort(freq_vector.begin(), freq_vector.end(), greater<pair<int, char>>());

    // Step 4: Build the result string by repeating characters based on their frequency
    string result = "";
    for (auto& entry : freq_vector) {
        result += string(entry.first, entry.second);
    }

    return result;   
    }
};