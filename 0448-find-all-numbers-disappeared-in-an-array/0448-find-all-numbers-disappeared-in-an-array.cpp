class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        // Mark visited indices
        for (int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;  // Get the index corresponding to the value
            
            if (nums[index] > 0) {
                nums[index] = -nums[index];  // Mark as visited by making negative
            }
        }
        
        vector<int> res;
        
        // Collect indices which are positive -> these indices+1 are missing numbers
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                res.push_back(i + 1);
            }
        }
        
        return res;
    }
};
