// class Solution {
// public:
//     long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
//         int n = bottomLeft.size();
//         long long max_area_square = INT_MIN;

//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 int x1min = bottomLeft[i][0];
//                 int y1min = bottomLeft[i][1];
//                 int x1max = topRight[i][0];
//                 int y1max = topRight[i][1];
//                 int x2min = bottomLeft[j][0];
//                 int y2min = bottomLeft[j][1];
//                 int x2max = topRight[j][0];
//                 int y2max = topRight[j][1];

//                 int xleft = max(x1min, x2min);
//                 int xright = min(x1max, x2max);

//                 int ybottom = max(y1min, y2min);
//                 int ytop = min(y1max, y2max);

//                 long width = xright - xleft;
//                 long height = ytop - ybottom;

//                 if(width>0 && height>0){
//                     long long side = min(width, height);
//                     max_area_square = max(max_area_square, side*side);
//                 }

//             }
//         }
//         if(max_area_square == INT_MIN) return 0;
//         return max_area_square;
//     }
// };