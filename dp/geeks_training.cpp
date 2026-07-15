// class Solution {
//   public:
//     int solve(int day, int last, vector<vector<int>>& mat, vector<vector<int>>& dp){
//         if(day == 0){
//             int max_p = 0;
//             for(int i=0; i<3; i++){
//                 if(i != last){
//                     max_p = max(max_p, mat[day][i]);
//                 }
//             }
//             return dp[day][last] = max_p;
//         }
        
//         if(dp[day][last] != -1){
//             return dp[day][last];
//         }
        
//         int max_p = 0;
//         for(int i=0; i<3; i++){
//             if(i != last){
//                 int points = mat[day][i] + solve(day-1, i, mat, dp);
//                 max_p = max(max_p, points);
//             }
//         }
        
//         return dp[day][last] = max_p;
//     }
  
//     int maximumPoints(vector<vector<int>>& mat) {
//         // code here
//         int n = mat.size();
//         vector<vector<int>> dp(n, vector<int>(4, -1));
        
//         return solve(n-1, 3, mat, dp);
//     }
// };