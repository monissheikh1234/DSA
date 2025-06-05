/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> levelQueue;
        levelQueue.push(root);
        levelQueue.push(nullptr);  // Level separator

        vector<double> arr;

        while (levelQueue.front() != nullptr) {
            double sum = 0;
            int nodes = 0;

            while (levelQueue.front() != nullptr) {
                TreeNode* node = levelQueue.front();
                levelQueue.pop();

                sum += node->val;
                nodes++;

                if (node->left) levelQueue.push(node->left);
                if (node->right) levelQueue.push(node->right);
            }

            // Push nullptr again to mark the end of the next level
            levelQueue.push(levelQueue.front());
            levelQueue.pop();

            arr.push_back(sum / nodes);
        }

        return arr;
    }
};
