// class Solution {
// public:
//     bool isMaxSide(vector<vector<int>>& mat, int y, int x, int s, int threshold){
//         int sum = 0;
//         for(int i=y; i<y+s; i++){
//             for(int j=x; j<x+s; j++){
//                 sum += mat[i][j];
//             }
//         }
//         if(sum <= threshold) return true;
//         return false;
//     }

//     int maxSideLength(vector<vector<int>>& mat, int threshold) {
//         int height = mat.size();
//         int width = mat[0].size();
//         if(height == 1 && width == 1){
//             if(mat[0][0] <= threshold) return 1;
//             return 0;
//         }
        
//         for (int s = min(height,width); s >=2; s--) {
//             for (int y = 0; y <= height - s; y++) {
//                 for (int x = 0; x <= width - s; x++) {
//                     if(isMaxSide(mat, y, x, s, threshold)){
//                         return s;
//                     }
//                 }
//             }
//         }
//         return 0;
//     }
// };--->BRUTE FORCE