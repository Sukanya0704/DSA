// class Solution {
// public:
//     bool checkcycleDFS(int row, int col, int p_row, int p_col, char ch, 
//                        vector<vector<bool>>& visited, vector<vector<char>>& grid) {
        
//         visited[row][col] = true;
//         int n = grid.size();
//         int m = grid[0].size();

//         int dx[] = {-1, 1, 0, 0};
//         int dy[] = {0, 0, -1, 1};

//         for(int i = 0; i < 4; i++) {
//             int n_row = row + dx[i];
//             int n_col = col + dy[i];

//             if(n_row >= 0 && n_row < n && n_col >= 0 && n_col < m) {
//                 if(grid[n_row][n_col] == ch) {
//                     if(visited[n_row][n_col]) {
//                         if(n_row != p_row || n_col != p_col) return true;
//                     } 
//                     else {
//                         if(checkcycleDFS(n_row, n_col, row, col, ch, visited, grid)) {
//                             return true;
//                         }
//                     }
//                 }
//             }
//         }
//         return false;
//     }

//     bool containsCycle(vector<vector<char>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<bool>> visited(n, vector<bool>(m, false));

//         for(int i = 0; i < n; i++) {
//             for(int j = 0; j < m; j++) {
//                 if(!visited[i][j]) {
//                     if(checkcycleDFS(i, j, -1, -1, grid[i][j], visited, grid)) {
//                         return true;
//                     }
//                 } 
//             }
//         }
//         return false;
//     }
// };