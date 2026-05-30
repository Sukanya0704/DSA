// class Solution {
// public:
//     int atmostK(vector<int>& nums, int k){
//         if(k == 0){
//             return 0;
//         }

//         int l = 0;
//         int r = 0;
//         int n = nums.size();
//         map<int, int> freq;
//         int cnt = 0;

//         while(r < n){
//             if(freq[nums[r]] == 0) k--;

//             freq[nums[r]]++;

//             while(k < 0){
//                 freq[nums[l]]--;
//                 if(freq[nums[l]] == 0) k++;
//                 l++;
//             }

//             cnt += (r -l +1);
//             r++;
//         }

//         return cnt;
//     }

//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         int cnt1 = atmostK(nums, k);
//         int cnt2 = atmostK(nums , k-1);

//         return cnt1 - cnt2;
//     }
// };