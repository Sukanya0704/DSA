// class Solution {
//   public:
//     bool check_subsequence(int idx, vector<int>& arr, int k, int& sum){
//         if(sum == k) return true;
        
//         if(idx == arr.size()) return false;
        
//         sum += arr[idx];
//         if(check_subsequence(idx+1, arr, k, sum)) return true;
//         sum -= arr[idx];
//         if(check_subsequence(idx+1, arr, k, sum)) return true;
    
//         return false;
//     }
    
//     bool checkSubsequenceSum(vector<int>& arr, int k) {
//         // Code here
//         int sum = 0;
//         if(check_subsequence(0, arr, k, sum)) return true;
//         else return false;
//     }
// };