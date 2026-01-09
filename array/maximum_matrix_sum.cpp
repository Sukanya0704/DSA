// class Solution {
// public:
//     long long maxMatrixSum(vector<vector<int>>& matrix) {
//         long long sum = 0;
//         vector<int> negs;
//         int min_ele = INT_MAX;

//         for(int i=0; i<matrix.size(); i++){
//             for(int j=0; j<matrix[i].size();j++){
//                 sum += abs(matrix[i][j]);
//                 if(matrix[i][j]<=0) negs.push_back(matrix[i][j]);
//                 min_ele = min(min_ele, abs(matrix[i][j]));
//             }
//         }

//         if(negs.size()%2 == 0) return sum;
//         else{
//             sum += -2*min_ele;
//             return sum;
//         }
//     }
// };