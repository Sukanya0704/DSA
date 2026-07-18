// class Solution {
//   public:
//     int minDifference(vector<int>& arr) {
//         // code here
//         vector<int> nums = arr;
//         int total_sum = 0;
//         for(int i=0; i<nums.size(); i++){
//             total_sum += nums[i];
//         }

//         vector<vector<bool>> dp(nums.size(), vector<bool>(total_sum+1, false));

//         for(int i=0; i<nums.size(); i++) dp[i][0] = true;
//         if(nums[0] <= total_sum) dp[0][nums[0]] = true;

//         for(int i=1; i<nums.size(); i++){
//             for(int j=1; j<=total_sum; j++){
//                 bool not_take = dp[i-1][j];
//                 bool take = false;
//                 if(nums[i] <= j) take = dp[i-1][j-nums[i]];

//                 dp[i][j] = take | not_take;
//             }
//         }

//         int mini = 1e9;
//         for(int i=0; i<=total_sum/2; i++){
//             if(dp[nums.size()-1][i] == true){
//                 mini = min(mini, abs((total_sum - i))- i);
//             }
//         }
//         return mini;
//     }
// };
