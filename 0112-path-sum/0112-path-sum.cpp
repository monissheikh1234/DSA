class Solution {
public:
//     bool hasPathSum(TreeNode* root, int targetSum) {
//  if (root == nullptr)
//             return false;

//         // Stack to store the nodes
//         stack<TreeNode*> path;
//         // Stack to store the corresponding path sums
//         stack<int> sumPath;

//         path.push(root);
//         sumPath.push(root->val);

//         while (!path.empty()) {
//             TreeNode* node = path.top(); path.pop();
//             int currSum = sumPath.top(); sumPath.pop();

//             // If it's a leaf node and the path sum matches
//             if (node->left == nullptr && node->right == nullptr && currSum == targetSum)
//                 return true;

//             // Push right child and its sum
//             if (node->right != nullptr) {
//                 path.push(node->right);
//                 sumPath.push(currSum + node->right->val);
//             }

//             // Push left child and its sum
//             if (node->left != nullptr) {
//                 path.push(node->left);
//                 sumPath.push(currSum + node->left->val);
//             }
//         }

//         return false;
//     }



bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;

    // Check if it is a leaf node and sum equals value
    if (!root->left && !root->right)
        return targetSum == root->val;

    // DFS on left and right subtree
    return hasPathSum(root->left, targetSum - root->val) ||
           hasPathSum(root->right, targetSum - root->val);
}

};