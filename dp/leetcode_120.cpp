// class Solution {
// public:
//     // int solve(int i, int j, int n, vector<vector<int>>& triangle, vector<vector<int>>& dp){
//     //     if(i == n-1) return triangle[i][j];

//     //     if(dp[i][j] != -1) return dp[i][j];

//     //     int d = solve(i+1, j, n, triangle, dp) + triangle[i][j];
//     //     int dg = solve(i+1, j+1, n, triangle, dp) + triangle[i][j];

//     //     return dp[i][j] = min(d, dg);
//     // }

//     int minimumTotal(vector<vector<int>>& triangle) {
//         int m = triangle.size();
//         int n = triangle[m-1].size();

//         vector<vector<int>> dp(m, vector<int>(n, -1));

//         for(int j=0; j<n; j++){
//             dp[m-1][j] = triangle[m-1][j];
//         }

//         for(int i=m-2; i>=0; i--){
//             for(int j=i; j>=0; j--){
//                 int d = dp[i+1][j] + triangle[i][j];
//                 int dg = dp[i+1][j+1] + triangle[i][j];
//                 dp[i][j] = min(d, dg);
//             }
//         }

//         return dp[0][0];
//         // return solve(0, 0, n, triangle, dp);
//     }
// };