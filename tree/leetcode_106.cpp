// class Solution {
// public:
//     TreeNode* helper(vector<int>& inorder, int instart, int inend, vector<int>& postorder, int poststart, int postend, unordered_map<int, int>& mapping){
//         if (instart > inend || poststart > postend) {
//             return nullptr;
//         }
//         int root_val = postorder[postend];
//         TreeNode* root = new TreeNode(root_val);

//         int root_idx = mapping[root_val];
//         int left_subtree_size = root_idx - instart;

//         root->left = helper(inorder, instart, instart + left_subtree_size -1, postorder, poststart, poststart + left_subtree_size - 1, mapping);
//         root->right = helper(inorder, root_idx + 1, inend, postorder, poststart + left_subtree_size , postend - 1, mapping);

//         return root;
//     }

//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//         int n = inorder.size();
//         unordered_map<int, int> mapping;

//         for(int i=0; i<n; i++){
//             mapping[inorder[i]] = i;
//         }

//         return helper(inorder, 0, n-1, postorder, 0, n-1, mapping);
//     }
// };