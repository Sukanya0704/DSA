// class Solution {
// public:
//     bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
//         if(mat == target) return true;
        
//         int n = mat.size(); 

//         for(int i = 0; i < 3; i++) {
//             vector<vector<int>> temp(n, vector<int>(n, 0));
//             int prev_row = 0;

//             for(int col = n - 1; col >= 0; col--) { 
//                 int prev_col = 0;
//                 for(int row = 0; row < n; row++) {  
//                     temp[row][col] = mat[prev_row][prev_col];
//                     prev_col++;
//                 }
//                 prev_row++;
//             }

//             mat = temp; 

//             if(mat == target) return true;
//         }
//         return false;
//     }
// };