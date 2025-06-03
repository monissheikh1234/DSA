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
    int height(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(height(root->left), height(root->right));
    }

    void printlevel(long long &ans, TreeNode* root, int currl, int reql, long long &n) {
        if (!root) return;
        if (currl == reql) {
            ans += root->val;
            n++;
        } else {
            printlevel(ans, root->left, currl + 1, reql, n);
            printlevel(ans, root->right, currl + 1, reql, n);
        }
    }

public:
    vector<double> averageOfLevels(TreeNode* root) {
        int h = height(root);
        vector<double> ans;
        for (int i = 1; i <= h; i++) {
            long long sum = 0, count = 0;
            printlevel(sum, root, 1, i, count);
            ans.push_back((double)sum / count);
        }
        return ans;
    }
};