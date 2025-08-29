// Optimized O(n log n)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        
        // Step 1: Sort by start time
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        
        // Step 2: Merge
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= result.back()[1]) {
                // Overlap: merge
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            } else {
                // No overlap: add new interval
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};
