// class Solution {
// public:
//     int minDepth(TreeNode* root) {
//         if(!root) return 0;
//         queue<pair<TreeNode*, int>> q;
//         q.push({root, 1});
//         while(!q.empty()){
//             TreeNode* node = q.front().first;
//             int depth = q.front().second;
//             q.pop();
//             if(node->right == nullptr && node->left == nullptr){
//                 return depth;
//             }
//             if(node->right!=nullptr){
//                 q.push({node->right, depth+1});
//             }
//             if(node->left!=nullptr){
//                 q.push({node->left, depth+1});
//             }
//         }
//         return 0;
//     }
// };