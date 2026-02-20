// class Solution {
// private:
//     bool is_safe(vector<string>& board, int row, int col, int n){
//         for(int i=0; i<row; i++){
//             if(board[i][col] == 'Q') return false;
//         }

//         for(int i=row, j=col; i>=0 && j>=0; i--, j--){
//             if(board[i][j] == 'Q') return false;
//         }

//         for(int i=row, j=col; i>=0 && j<n; i--, j++){
//             if(board[i][j] == 'Q') return false;
//         }

//         return true;
//     }

//     void solve(int row, int n, vector<string>& board, vector<vector<string>>& results){
//         if(row == n){
//             results.push_back(board);
//             return;
//         }

//         for(int col=0; col<n; col++){
//             if(is_safe(board, row, col, n)){
//                 board[row][col] = 'Q';
//                 solve(row+1, n, board, results);
//                 board[row][col] = '.';
//             }
//         }
//     }

// public:
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string>> results;

//         vector<string> board(n, string(n, '.'));

//         solve(0, n, board, results);

//         return results;
//     }
// };