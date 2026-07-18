// class Solution {
// public:
//     bool solve(int idx, int target, vector<int>& arr, vector<vector<int>>& dp){
//         if(target == 0) return true;
        
//         if(idx >= arr.size()) return false;
        
//         if(dp[idx][target] != -1) return dp[idx][target];
        
//         bool not_take = solve(idx +1, target, arr, dp);
//         bool take = false;
//         if(arr[idx] <= target){
//             take = solve(idx +1, target - arr[idx], arr, dp);
//         }
        
//         return dp[idx][target] = (take | not_take);
//     }

//     bool canPartition(vector<int>& nums) {
//         int total_sum = 0;
//         for(int i=0; i<nums.size(); i++){
//             total_sum += nums[i];
//         }

//         if(total_sum % 2 != 0) return false;

//         vector<vector<int>> dp(nums.size(), vector<int>((total_sum /2) +1, -1));

//         return solve(0, total_sum/2, nums, dp);
//     }
// };