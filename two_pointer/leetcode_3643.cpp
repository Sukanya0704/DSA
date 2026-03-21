// class Solution {
// public:
//     vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
//         int i = x;
//         int j = x + k - 1;

//         while(i < j){
//             for(int s = y; s < y + k; s++){
//                 int temp = grid[i][s];
//                 grid[i][s] = grid[j][s];
//                 grid[j][s] = temp;
//             }
//             i++;
//             j--;
//         }

//         return grid;
//     }
// };