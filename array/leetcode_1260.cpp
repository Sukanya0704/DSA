// class Solution {
// public:
//     vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
//         vector<vector<int>> temp = grid;
//         vector<vector<int>> ans = grid;
//         int n = grid.size();
//         int m = grid[0].size();

//         for(int i=0; i<k; i++){
//             for(int i=0; i<n; i++){
//                 for(int j=1; j<m; j++){
//                     ans[i][j] = temp[i][j-1];
//                 }
//             }

//             for(int i=0; i<n-1; i++){
//                 ans[i+1][0] = temp[i][m-1];
//             }

//             ans[0][0] = temp[n-1][m-1];
            
//             temp = ans;
//         }

//         return ans;
//     }
// };