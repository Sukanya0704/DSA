// class Solution {
// public:
//     int mod = 1000000007;
//     long long calculate_subtree_sum(TreeNode* node){
//         long long sum = 0; 
//         if(!node) return 0;
        
//         queue<TreeNode*> q;
//         q.push(node);
//         while(!q.empty()){
//             TreeNode* temp = q.front();
//             q.pop();
//             sum += temp->val;
//             if(temp->left) q.push(temp->left);
//             if(temp->right) q.push(temp->right);
//         }
//         return sum;
//     }

//     int maxProduct(TreeNode* root) {
//         long long total_sum = calculate_subtree_sum(root);
//         long long max_product = 0; 
        
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty()){
//             TreeNode* temp = q.front();
//             q.pop();
            
//             if(temp->left != nullptr){
//                 long long num1 = calculate_subtree_sum(temp->left);
//                 max_product = max(max_product, (total_sum - num1) * num1);
//             }
//             if(temp->right != nullptr){
//                 long long num2 = calculate_subtree_sum(temp->right);
//                 max_product = max(max_product, (total_sum - num2) * num2);
//             }
            
//             if(temp->left != nullptr) q.push(temp->left);
//             if(temp->right != nullptr) q.push(temp->right);
//         }
//         return (int)(max_product % mod);
//     }
// };