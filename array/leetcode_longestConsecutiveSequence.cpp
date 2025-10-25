// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n = nums.size();
//         if(n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
//         sort(nums.begin(),nums.end());
//         int longest = INT_MIN;
//         int cnt = 1;
//         int lastsmaller = nums[0];


//         for(int i=1; i<n;i++){
//             if(nums[i] == lastsmaller +1){
//                 cnt++;
//                 lastsmaller = nums[i];
//             }
//             else if(nums[i] == lastsmaller){
//                 lastsmaller = nums[i];
//             }
//             else{
//                 cnt = 1;
//                 lastsmaller = nums[i];
//             }
//             longest = max(longest,cnt);
//         }
//         return longest;
//     }
// };