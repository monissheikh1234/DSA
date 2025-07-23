
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        vector<int> arr(128, 0);
        int l = 0;
        for (int i = 0; i < s.length(); i++) {
            int curr = s[i];
            while (arr[curr] > 0) {
                arr[s[l]]--;
                l++;
            }
            arr[curr]++;
            ans = max(ans, i - l + 1);
        }
        return ans;
    }
};