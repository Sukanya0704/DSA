// class Solution {
// public:
//     // int solve(int row, int col, vector<vector<int>>& mat, vector<vector<int>>& dp){
//     //     if(row < 0 || col < 0) return 1e9;

//     //     if(col >= mat[0].size()) return 1e9;

//     //     if(row == mat.size() - 1) return mat[row][col];

//     //     if(dp[row][col] != -1) return dp[row][col];

//     //     int down = mat[row][col] + solve(row+1, col, mat, dp);
//     //     int down_left = mat[row][col] + solve(row+1, col-1, mat, dp);
//     //     int down_right = mat[row][col] + solve(row+1, col+1, mat, dp);

//     //     return dp[row][col] = min(down, min(down_left, down_right));
//     // }

//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int min_falling_sum = INT_MAX;
//         int n = matrix.size();
//         int m = matrix[0].size();

//         vector<vector<int>> dp(n, vector<int>(m, -1));
        
//         for(int i=0; i<m; i++){
//             dp[0][i] = matrix[0][i];
//         }

//         for(int i=1; i<n; i++){
//             for(int j=0; j<m; j++){
//                 int up_left = INT_MAX;
//                 int up_right = INT_MAX;

//                 int up = matrix[i][j] + dp[i-1][j];
//                 if(j-1 >= 0) up_left = matrix[i][j] + dp[i-1][j-1];
//                 if(j+1 < m) up_right = matrix[i][j] + dp[i-1][j+1];

//                 dp[i][j] = min(up, min(up_left, up_right));
//             }
//         }

//         for(int i=0; i<m; i++){
//             min_falling_sum = min(min_falling_sum, dp[n-1][i]);
//         }

//         //Space Optimization can be done just by storing previous and cur

//         return min_falling_sum;
//     }
// };