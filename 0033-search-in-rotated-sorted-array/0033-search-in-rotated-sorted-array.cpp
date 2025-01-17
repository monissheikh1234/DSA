class Solution {
public:
    int search(vector<int>& nums, int target) {
          int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the target is found
        if (nums[mid] == target) {
            return mid;
        }

        // Check which part is sorted
        if (nums[left] <= nums[mid]) { // Left part is sorted
            if (nums[left] <= target && target < nums[mid]) {
                right = mid - 1; // Target is in the left part
            } else {
                left = mid + 1; // Target is in the right part
            }
        } else { // Right part is sorted
            if (nums[mid] < target && target <= nums[right]) {
                left = mid + 1; // Target is in the right part
            } else {
                right = mid - 1; // Target is in the left part
            }
        }
    }

    // If the target is not found
    return -1;
    }
};