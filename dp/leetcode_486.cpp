// class Solution {
// public:
//     pair<int, int> solve(int start, int end, bool is_p1, vector<int>& nums, vector<vector<vector<pair<int,int>>>>& dp){
//         if(start == end){
//             if(is_p1){
//                 return {nums[start], 0};
//             }
//             else{
//                 return {0, nums[start]};
//             }
//         }

//         int p1_turn = -1;
//         if(is_p1) p1_turn = 1;
//         else p1_turn = 0;

//         if(dp[start][end][p1_turn].first != -1){
//             return dp[start][end][p1_turn];
//         }

//         if(is_p1){
//             pair<int,int> choice_a = solve(start+1, end, false, nums, dp);
//             choice_a.first += nums[start];

//             pair<int,int> choice_b = solve(start, end-1, false, nums, dp);
//             choice_b.first += nums[end];

//             if(choice_a.first >= choice_b.first){
//                 return dp[start][end][p1_turn] = choice_a;
//             }
//             else{
//                 return dp[start][end][p1_turn] = choice_b;
//             }
//         }
//         else{
//             pair<int,int> choice_a = solve(start+1, end, true, nums, dp);
//             choice_a.second += nums[start];

//             pair<int,int> choice_b = solve(start, end-1, true, nums, dp);
//             choice_b.second += nums[end];

//             if(choice_a.second >= choice_b.second){
//                 return dp[start][end][p1_turn] = choice_a;
//             }
//             else{
//                 return dp[start][end][p1_turn] = choice_b;
//             }
//         }
//     }

//     bool predictTheWinner(vector<int>& nums) {
//         int n = nums.size();

//         vector<vector<vector<pair<int,int>>>> dp(
//             n, vector<vector<pair<int,int>>>(
//                 n, vector<pair<int,int>>(2, {-1, -1})
//             )
//         );

//         pair<int, int> final_scores = solve(0, n-1, true, nums, dp);

//         return final_scores.first >= final_scores.second;
//     }
// };