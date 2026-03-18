// class Solution {
// public:
//     int countSubmatrices(vector<vector<int>>& grid, int k) {
//         int m = grid.size();
//         int n = grid[0].size();
//         int count = 0;

//         vector<vector<int>> pref(m, vector<int>(n, 0));

//         for(int i = 0; i < m; i++){
//             for(int j = 0; j < n; j++){
//                 if (i == 0 && j == 0) {
//                     pref[i][j] = grid[i][j];
//                 }
//                 else if (i == 0) {
//                     pref[i][j] = grid[i][j] + pref[i][j-1];
//                 }
//                 else if (j == 0) {
//                     pref[i][j] = grid[i][j] + pref[i-1][j];
//                 }
//                 else {
//                     pref[i][j] = grid[i][j] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
//                 }

//                 if (pref[i][j] <= k) {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };