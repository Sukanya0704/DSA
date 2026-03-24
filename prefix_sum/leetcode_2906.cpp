// class Solution {
// public:
//     vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         int MOD = 12345;

//         vector<vector<int>> prefix(n, vector<int>(m, 1));
//         vector<vector<int>> suffix(n, vector<int>(m, 1));
//         vector<vector<int>> product_matrix(n, vector<int>(m, 1));

//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(i == 0 && j == 0) continue; 
                
//                 if(j == 0){
//                     prefix[i][j] = (1LL * prefix[i-1][m-1] * (grid[i-1][m-1] % MOD)) % MOD;
//                 } else {
//                     prefix[i][j] = (1LL * prefix[i][j-1] * (grid[i][j-1] % MOD)) % MOD;
//                 }
//             }
//         }

//         for(int i = n - 1; i >= 0; i--){
//             for(int j = m - 1; j >= 0; j--){
//                 if(i == n - 1 && j == m - 1) continue; 
                
//                 if(j == m - 1){
//                     suffix[i][j] = (1LL * suffix[i+1][0] * (grid[i+1][0] % MOD)) % MOD;
//                 } else {
//                     suffix[i][j] = (1LL * suffix[i][j+1] * (grid[i][j+1] % MOD)) % MOD;
//                 }
//             }
//         }

//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 product_matrix[i][j] = (1LL * prefix[i][j] * suffix[i][j]) % MOD;
//             }
//         }

//         return product_matrix;
//     }
// };