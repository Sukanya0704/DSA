// class Solution {
// public:
//     int sum_less_than_equal_goal(vector<int>& nums, int target){
//         if (target < 0) {
//             return 0;
//         }
        
//         int l = 0;
//         int r = 0;
//         int cnt = 0;
//         int sum = 0;
//         int n = nums.size();

//         while(r < n){
//             sum += nums[r];
//             while(sum > target){
//                 sum -= nums[l];
//                 l++;
//             }
//             cnt += r -l +1;
//             r++;
//         }

//         return cnt;
//     }

//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         int cnt1 = sum_less_than_equal_goal(nums, goal);
//         int cnt2 = sum_less_than_equal_goal(nums, goal-1);

//         return cnt1 - cnt2;
//     }
// };
// class Solution {
// public:
//     int sum_less_than_equal_goal(vector<int>& nums, int target){
//         if (target < 0) {
//             return 0;
//         }
        
//         int l = 0;
//         int r = 0;
//         int cnt = 0;
//         int sum = 0;
//         int n = nums.size();

//         while(r < n){
//             sum += nums[r];
//             while(sum > target){
//                 sum -= nums[l];
//                 l++;
//             }
//             cnt += r -l +1;
//             r++;
//         }

//         return cnt;
//     }

//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         int cnt1 = sum_less_than_equal_goal(nums, goal);
//         int cnt2 = sum_less_than_equal_goal(nums, goal-1);

//         return cnt1 - cnt2;
//     }
// };