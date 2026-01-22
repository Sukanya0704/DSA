// class Solution {
// public:
//     double areabelow(double mid, vector<vector<int>>& squares){
//         double area = 0;
//         for(auto& square : squares){
//             double y_bottom = square[1];
//             double len = square[2];
//             double y_top = y_bottom + len;

//             if(mid >= y_top){
//                 area += len * len;
//             } else if(mid > y_bottom){
//                 area += len * (mid - y_bottom);
//             }
//         }
//         return area;
//     }

//     double separateSquares(vector<vector<int>>& squares) {
//         double min_y = 1e9;
//         double max_y = -1e9;
//         double total_area = 0;

//         for(auto& square : squares){
//             double len = square[2];
//             total_area += len * len; 
//             min_y = min(min_y, (double)square[1]);
//             max_y = max(max_y, (double)square[1] + len);
//         }

//         double target = total_area / 2.0;
//         double low = min_y;
//         double high = max_y;
//         double ans = min_y;

//         while(high - low > 1e-5){ 
//             double mid = low + (high - low) / 2.0; 
            
//             if(areabelow(mid, squares) < target){
//                 low = mid;
//             } else {
//                 ans = mid;
//                 high = mid;
//             }
//         }
//         return ans;
//     }
// };