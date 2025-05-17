class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> result(nums.size());
        int pos = nums.size() - 1;
        
        // Square each element
        for(int i = 0; i < nums.size(); i++){
            nums[i] = nums[i] * nums[i];
        }

        // Use two-pointer approach to sort the squared elements
        while(left <= right){
            if(nums[left] > nums[right]){
                result[pos] = nums[left];
                left++;
            } else {
                result[pos] = nums[right];
                right--;
            }
            pos--;
        }

        return result;
    }
};
