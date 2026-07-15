// class Solution {
// public:
//     // int solve(int idx, vector<int>& nums, vector<int>& dp){
//     //     if(idx == 0) return nums[idx];

//     //     if(dp[idx] != -1) return dp[idx];

//     //     int pick = nums[idx];
//     //     if(idx > 1){
//     //         pick += solve(idx-2, nums, dp);
//     //     }
//     //     int not_pick = solve(idx-1, nums, dp);

//     //     return dp[idx] = max(pick, not_pick);
//     // }

//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> dp(n, -1);

//         dp[0] = nums[0];
//         for(int idx=1; idx<n; idx++){
//             int pick = nums[idx];
//             if(idx > 1){
//                 pick += dp[idx-2];
//             }
//             int not_pick = dp[idx-1];

//             dp[idx] = max(pick, not_pick);
//         }

//         // return solve(n-1, nums, dp);
//         // We can reduce more space using variables also
//         return dp[n-1];
//     }
// };