// class Solution {
//   public:
//     void solve(int idx, int sum, vector<int>& arr, vector<int>& subset_sums){
//         if(idx == arr.size()){
//             subset_sums.push_back(sum);
//             return;
//         }
//         int temp = sum + arr[idx];
        
//         solve(idx +1, temp, arr, subset_sums);
        
//         solve(idx +1, sum, arr, subset_sums);
//     }
  
//     vector<int> subsetSums(vector<int>& arr) {
//         // code here
//         vector<int> subset_sums;
        
//         solve(0, 0, arr, subset_sums);
        
//         return subset_sums;
//     }
// };