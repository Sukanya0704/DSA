// class Solution {
// public:
//     bool isMagicSquare(vector<vector<int>>& grid, int y, int x, int s) {
//         if (s == 1)
//             return true;
//         long long target_sum = 0;

//         for (int i = x; i < x + s; i++) {
//             target_sum += grid[y][i];
//         }

//         for (int i = y; i < y + s; i++) {
//             long long row_sum = 0;
//             for (int j = x; j < x + s; j++) {
//                 row_sum += grid[i][j];
//             }
//             if (row_sum != target_sum)
//                 return false;
//         }

//         for (int i = x; i < x + s; i++) {
//             long long col_sum = 0;
//             for (int j = y; j < y + s; j++) {
//                 col_sum += grid[j][i];
//             }
//             if (col_sum != target_sum)
//                 return false;
//         }

//         long long diagonal_sum1 = 0;
//         for(int i=0; i<s; i++){
//             diagonal_sum1 += grid[y+i][x+i];
//         }

//         if(diagonal_sum1 != target_sum)
//             return false;

//         long long diagonal_sum2 = 0;
//         for(int i=0; i<s; i++){
//             diagonal_sum2 += grid[y+i][x+s-1-i];
//         }

//         if(diagonal_sum2 != target_sum)
//             return false;

//         return true;
//     }

//     int largestMagicSquare(vector<vector<int>>& grid) {
//         int height = grid.size();
//         int width = grid[0].size();
//         int side = 1;

//         for (int s = 2; s <= min(height, width); s++) {
//             for (int y = 0; y <= height - s; y++) {
//                 for (int x = 0; x <= width - s; x++) {
//                     if(isMagicSquare(grid, y, x,s)){
//                         side = max(side, s);
//                     }
//                 }
//             }
//         }
//         return side;
//     }
// };