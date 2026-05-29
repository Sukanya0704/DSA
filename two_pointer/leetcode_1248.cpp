// class Solution {
// public:
//     int count_less_than_equal_goal(vector<int>& nums, int target){
//         if (target < 0) return 0;
        
//         int l = 0;
//         int r = 0;
//         int cnt = 0;
//         int odd_cnt = 0;
//         int n = nums.size();

//         while(r < n){
//             if(nums[r] % 2 == 1) odd_cnt++;
//             while(odd_cnt > target){
//                 if(nums[l] % 2 == 1) odd_cnt--;
//                 l++;
//             }
//             if(odd_cnt <= target) cnt += r -l +1;
//             r++;
//         }

//         return cnt;
//     }

//     int numberOfSubarrays(vector<int>& nums, int k) {
//         int cnt1 = count_less_than_equal_goal(nums, k);
//         int cnt2 = count_less_than_equal_goal(nums, k-1);

//         return cnt1 - cnt2;
//     }
// };