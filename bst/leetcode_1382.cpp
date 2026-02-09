// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     void inorder(TreeNode* root, vector<int>& inorder_traversal){
//         if(!root) return;

//         inorder(root->left, inorder_traversal);
//         inorder_traversal.push_back(root->val);
//         inorder(root->right, inorder_traversal);
//     }

//     TreeNode* build_balanced_BST(vector<int>& traversal, int start, int end){
//         if(start > end) return nullptr;

//         int mid = start + (end - start)/2;
//         TreeNode* node = new TreeNode(traversal[mid]);
//         node->left = build_balanced_BST(traversal, start, mid-1);
//         node->right = build_balanced_BST(traversal, mid+1, end);

//         return node;
//     }

//     TreeNode* balanceBST(TreeNode* root) {
//         if(!root)return nullptr;

//         vector<int> inorder_traversal;
//         inorder(root, inorder_traversal);

//         return build_balanced_BST(inorder_traversal, 0, inorder_traversal.size()-1);
//     }
// };