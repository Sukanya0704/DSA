// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int n = nums.size();
//         int temp = k;
//         int l = 0;
//         int r = 0;
//         int max_len = 0;

//         while(r < n){
//             if(nums[r] == 0){
//                 if(temp > 0) {
//                     temp --;
//                 }
//                 else if(temp == 0){
//                     while(nums[l] != 0) l++;
//                     l++;
//                 }
//             }
//             int len = r -l +1;
//             max_len = max(max_len, len);
//             r++;
//         }

//         return max_len;
//     }
// };