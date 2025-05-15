class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        
        if (n < 4) return res;  // Edge case: less than 4 elements
        
        sort(nums.begin(), nums.end());  // Sort the array
        
        for (int i = 0; i < n - 3; i++) {  // First pointer
            if (i > 0 && nums[i] == nums[i - 1]) continue;  // Skip duplicate `i`
            
            for (int j = i + 1; j < n - 2; j++) {  // Second pointer
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;  // Skip duplicate `j`
                
                int p = j + 1, q = n - 1;  // Two-pointer approach
                
                while (p < q) {
                    long long sum = (long long)nums[i] + nums[j] + nums[p] + nums[q];

                    if (sum < target) {
                        p++;
                    } else if (sum > target) {
                        q--;
                    } else {
                        res.push_back({nums[i], nums[j], nums[p], nums[q]});
                        
                        // Skip duplicate `p` values
                        while (p < q && nums[p] == nums[p + 1]) p++;
                        // Skip duplicate `q` values
                        while (p < q && nums[q] == nums[q - 1]) q--;

                        // Move to next distinct values
                        p++;
                        q--;
                    }
                }
            }
        }
        
        return res;

}
    
};