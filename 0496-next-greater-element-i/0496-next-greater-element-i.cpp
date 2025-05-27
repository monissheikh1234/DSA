class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> nextGreaterElements(n, -1); // Result array for nums2
        stack<int> helperStack;

        for (int i = n - 1; i >= 0; --i) {
            int element = nums2[i];

            // Remove all elements smaller than or equal to element
            while (!helperStack.empty() && helperStack.top() <= element) {
                helperStack.pop();
            }

            if (!helperStack.empty()) {
                nextGreaterElements[i] = helperStack.top();
            } else {
                nextGreaterElements[i] = -1;
            }

            helperStack.push(element);
        }

        // Now map nums2's values to their next greater using index
        // and build result for nums1
        vector<int> result;
        for (int val : nums1) {
            // find val in nums2 to get its index
            for (int i = 0; i < n; ++i) {
                if (nums2[i] == val) {
                    result.push_back(nextGreaterElements[i]);
                    break;
                }
            }
        }

        return result;
    }
};
