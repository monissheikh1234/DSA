class Solution {
public:
    void moveZeroes(vector<int>& nums) {
           int size = nums.size();

    int x = 0;  // This will track the position for the next non-zero element

    // Iterate over the array
    for (int i = 0; i < size; i++) {
        if (nums[i] != 0) {
            // Swap the non-zero element with the element at index 'x'
            swap(nums[i], nums[x]);
            x++;  // Move the pointer to the next position
        }
    }
    }
};