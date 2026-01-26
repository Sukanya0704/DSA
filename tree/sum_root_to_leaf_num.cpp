// class Solution {
// public:
//     void dfs(TreeNode* root, vector<string>& paths, string& temp){
//         temp += to_string(root->val);

//         if(root->left == nullptr && root->right == nullptr){
//             paths.push_back(temp);
//         }

//         if(root->left != nullptr){
//             dfs(root->left, paths, temp);
//         }
//         if(root->right != nullptr){
//             dfs(root->right, paths, temp);
//         }
//         temp.pop_back(); 
//     }

//     int sumNumbers(TreeNode* root) {
//         if (root == nullptr) return 0;
//         int sum = 0;
//         vector<string> paths;
//         string temp = "";
//         dfs(root, paths, temp);

//         for(auto path : paths){
//             sum += stoi(path); 
//         }
//         return sum;
//     }
// };
// class Solution {
// public:
//     void dfs(TreeNode* root, vector<string>& paths, string& temp){
//         temp += to_string(root->val);

//         if(root->left == nullptr && root->right == nullptr){
//             paths.push_back(temp);
//         }

//         if(root->left != nullptr){
//             dfs(root->left, paths, temp);
//         }
//         if(root->right != nullptr){
//             dfs(root->right, paths, temp);
//         }
//         temp.pop_back(); 
//     }

//     int sumNumbers(TreeNode* root) {
//         if (root == nullptr) return 0;
//         int sum = 0;
//         vector<string> paths;
//         string temp = "";
//         dfs(root, paths, temp);

//         for(auto path : paths){
//             sum += stoi(path); 
//         }
//         return sum;
//     }
// };