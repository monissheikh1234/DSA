class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
             unordered_map<int, int> hashMap; // To store value and its index
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; // Find the required complement
        if (hashMap.find(complement) != hashMap.end()) {
            // If complement exists in the map, return indices
            return {hashMap[complement], i};
        }
        hashMap[nums[i]] = i; // Store current value with its index
    }
    
    return {};
    }
};