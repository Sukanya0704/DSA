// class Solution {
// public:
//     void dfs(TreeNode* root, int targetSum, vector<vector<int>>& paths_to_targetSum, vector<int>& temp, int& sum) {
//         sum += root->val;
//         temp.push_back(root->val);

//         if (root->left == nullptr && root->right == nullptr) {
//             if (sum == targetSum) {
//                 paths_to_targetSum.push_back(temp);
//             }
//         } else {
//             if (root->left != nullptr) {
//                 dfs(root->left, targetSum, paths_to_targetSum, temp, sum);
//             }
//             if (root->right != nullptr) {
//                 dfs(root->right, targetSum, paths_to_targetSum, temp, sum);
//             }
//         }

//         sum -= root->val;
//         temp.pop_back();
//     }

//     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//         vector<vector<int>> paths_to_targetSum;
//         if (root == nullptr) return paths_to_targetSum;

//         vector<int> temp;
//         int sum = 0;
//         dfs(root, targetSum, paths_to_targetSum, temp, sum);

//         return paths_to_targetSum;
//     }
// };