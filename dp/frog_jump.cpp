// class Solution {
//   public:
//     int solve(int idx, vector<int>& height, vector<int>& dp){
//         if(idx == 0) return 0;
        
//         if(dp[idx] != -1) return dp[idx];
        
//         int jump_one = solve(idx-1, height, dp) + abs(height[idx] - height[idx -1]);
//         int jump_two = INT_MAX;
        
//         if(idx > 1){
//             jump_two = solve(idx-2, height, dp) + abs(height[idx] - height[idx -2]);
//         }
        
//         return dp[idx] = min(jump_one, jump_two);
//     }
    
//     int minCost(vector<int>& height) {
//         // Code here
//         int n = height.size();
//         vector<int> dp(n+1, -1);
        
//         // return solve(n-1, height, dp);
        
//         dp[0] = 0;
//         for(int idx=1; idx<n; idx++){
//             int jump_one = solve(idx-1, height, dp) + abs(height[idx] - height[idx -1]);
//             int jump_two = INT_MAX;
        
//             if(idx > 1){
//                 jump_two = solve(idx-2, height, dp) + abs(height[idx] - height[idx -2]);
//             }
        
//             dp[idx] = min(jump_one, jump_two);
//         }
        
//         //To reduce the space complexity we can use two variables as well
        
//         return dp[n-1];
//     }
// };