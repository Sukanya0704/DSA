// class Solution {
// public:
//     int minOperations(vector<vector<int>>& grid, int x) {
//         int m = grid.size();
//         int n = grid[0].size();
//         int remainder = grid[0][0] % x;
//         bool all_remainder_same = true;
//         vector<int> numbers;

//         for(int i=0; i<m; i++){
//             for(int j=0; j<n; j++){
//                 if(grid[i][j] % x != remainder){
//                     all_remainder_same = false;
//                 }
//                 numbers.push_back(grid[i][j]);
//             }
//         }

//         if(!all_remainder_same) return -1;

//         sort(numbers.begin(), numbers.end());
        
//         int totalElements = m * n;
//         int operations = 0;

//         if(totalElements % 2 == 1){
//             int mid = totalElements / 2;
//             for(int i=0; i < totalElements; i++){
//                 operations += abs(numbers[i] - numbers[mid]) / x;
//             }
//         }
//         else{
//             int mid_1 = (totalElements / 2) - 1; 
//             int mid_2 = totalElements / 2;
            
//             long long operations_1 = 0;
//             long long operations_2 = 0;

//             for(int i=0; i < totalElements; i++){
//                 operations_1 += abs(numbers[i] - numbers[mid_1]) / x;
//                 operations_2 += abs(numbers[i] - numbers[mid_2]) / x;
//             }
//             operations = min((long long)operations_1, (long long)operations_2);
//         }

//         return operations;
//     }
// };