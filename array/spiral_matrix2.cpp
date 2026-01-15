// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {
//         vector<vector<int>> spiral_matrix(n, vector<int>(n, 0));

//         int top = 0;
//         int left = 0;
//         int right = n-1;
//         int bottom = n-1;
//         int num = 1;

//         while(top<=bottom && left<=right){
//             for(int i=left; i<=right; i++){
//                 spiral_matrix[top][i] = num;
//                 num++;
//             }
//             top++;

//             for(int i=top; i<=bottom; i++){
//                 spiral_matrix[i][right] = num;
//                 num++;
//             }
//             right--;

//             if(top<=bottom){
//                 for(int i=right; i>=left; i--){
//                     spiral_matrix[bottom][i] = num;
//                     num++;
//                 }
//             }
//             bottom--;

//             if(left<=right){
//                 for(int i=bottom; i>=top; i--){
//                     spiral_matrix[i][left] = num;
//                     num++;
//                 }
//             }
//             left++;
//         }
//         return spiral_matrix;
//     }
// };