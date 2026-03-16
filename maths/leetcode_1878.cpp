// class Solution {
// public:
//     vector<int> getBiggestThree(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         set<int> unique_sums;

//         for(int i=0; i<m; i++){
//             for(int j=0; j<n; j++){
//                 unique_sums.insert(grid[i][j]);

//                 for(int k=1; ; k++){
//                     if(i + 2*k >= m || j - k < 0 || j + k >= n) break;

//                     int current_sum = 0;

//                     for(int a=0; a<k; a++){
//                         current_sum += grid[i + a][j + a];
//                     }
//                     for(int a=0; a<k; a++){
//                         current_sum += grid[i + k + a][j + k - a];
//                     }
//                     for(int a=0; a<k; a++){
//                         current_sum += grid[i + 2*k - a][j - a];
//                     }
//                     for(int a=0; a<k; a++){
//                         current_sum += grid[i + k - a][j - k + a];
//                     }

//                     unique_sums.insert(current_sum);
//                 }

//                 while (unique_sums.size() > 3) {
//                     unique_sums.erase(unique_sums.begin());
//                 }
//             }
//         }

//         vector<int> result(unique_sums.rbegin(), unique_sums.rend());
//         return result;
//     }
// };