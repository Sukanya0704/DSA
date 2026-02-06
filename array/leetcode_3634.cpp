// class Solution {
// public:
//     int minRemoval(vector<int>& nums, int k) {
//         int n = nums.size();
//         if(n<=1) return 0;

//         sort(nums.begin(), nums.end());

//         int max_kept = 0;
//         int right = 0;

//         for(int i=0; i<n; i++){
//             while(right<n && (long long)nums[right] <= (long long)nums[i]*k){
//                 right++;
//             }

//             int curr_length = right - i;
//             max_kept = max(max_kept, curr_length);
//         }
//         return n - max_kept;
//     }
// };