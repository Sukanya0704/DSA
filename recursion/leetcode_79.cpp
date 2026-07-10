// class Solution {
// public:
//     bool solve(int idx, int row, int col, vector<vector<char>>& board, string word){
//         if(idx == word.length()) return true;

//         int m = board.size();
//         int n = board[0].size();

//         int dr[] = {-1, 1, 0, 0};
//         int dc[] = {0, 0, -1, 1};

//         for(int i=0; i<4; i++){
//             int nr = row + dr[i];
//             int nc = col + dc[i];

//             if(nr >= 0 && nr < m && nc >= 0 && nc < n){
//                 if(board[nr][nc] == word[idx]){
//                     char original_letter = board[nr][nc];
//                     board[nr][nc] = '*';
//                     if(solve(idx+1, nr, nc, board, word) == true) return true;
//                     board[nr][nc] = original_letter;
//                 }
//             }
//         }
//         return false;
//     }

//     bool exist(vector<vector<char>>& board, string word) {

//         int m = board.size();
//         int n = board[0].size();

//         for(int i=0; i<m; i++){
//             for(int j=0; j<n; j++){
//                 if(board[i][j] == word[0]){
//                     char original_letter = board[i][j];
//                     board[i][j] = '*';
//                     if(solve(1, i, j, board, word) == true) return true;
//                     board[i][j] = original_letter;
//                 }
//             }
//         }

//         return false;
//     }
// };