// class Solution {
// public:
//     void solve(int idx, int sum, vector<int>& nums, int k, int n, vector<vector<int>>& ans, vector<int>& ds){
//         if(ds.size() == k){
//             if(sum == n){
//                 ans.push_back(ds);
//             }
//             return;
//         }

//         if(idx == nums.size()){
//             return;
//         }

//         ds.push_back(nums[idx]);
//         solve(idx+1, sum + nums[idx], nums, k, n, ans, ds);
//         ds.pop_back();
//         solve(idx+1, sum , nums, k, n, ans, ds);
//     }

//     vector<vector<int>> combinationSum3(int k, int n) {
//         vector<int> nums(9);
//         iota(nums.begin(), nums.end(), 1);

//         vector<vector<int>> ans;
//         vector<int> ds;

//         solve(0, 0, nums, k, n, ans, ds);

//         return ans;
//     }
// };