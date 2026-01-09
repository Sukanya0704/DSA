// class Solution {
// public:
//     pair<TreeNode*, int> helper(TreeNode* root) {
//         if (!root) return {nullptr, 0};

//         auto left = helper(root->left);
//         auto right = helper(root->right);

//         int leftDepth = left.second;
//         int rightDepth = right.second;

//         if (leftDepth == rightDepth) {
//             return {root, leftDepth + 1};
//         }
     
//         if (leftDepth > rightDepth) {
//             return {left.first, leftDepth + 1};
//         }

//         return {right.first, rightDepth + 1};
//     }

//     TreeNode* subtreeWithAllDeepest(TreeNode* root) {
//         return helper(root).first;
//     }
// };