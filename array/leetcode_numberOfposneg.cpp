// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n,0);
//         int posindex = 0;
//         int negindex = 1;
//         for(int i=0; i<n; i++){
//             if(nums[i]<0){
//                 ans[negindex] = nums[i];
//                 negindex += 2;
//             }
//             if(nums[i]>0){
//                 ans[posindex] = nums[i];
//                 posindex += 2;
//             }
//         }
//         return ans;
//     }
// };

//If number of positives and number of negatives are not equal then we will move with brute force solution where we maintain array for positives and negatives.