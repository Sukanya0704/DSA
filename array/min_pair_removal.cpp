// class Solution {
// public:
//     bool isSorted(vector<int>& nums){
//         for(int i=0; i<nums.size()-1; i++){
//             if(nums[i] > nums[i+1]) return false;
//         }
//         return true;
//     }

//     int minimumPairRemoval(vector<int>& nums) {
//         int operations = 0;
//         int n = nums.size();

//         while(!isSorted(nums)){
//             int min_sum = INT_MAX;
//             int target_index = -1;

//             for(int i=0; i<nums.size()-1; i++){
//                 if(nums[i]+nums[i+1] < min_sum){
//                     min_sum = nums[i] + nums[i+1];
//                     target_index = i;
//                 }
//             }
//             nums[target_index] = min_sum;
//             nums.erase(nums.begin()+ target_index + 1);
//             operations++;
//         }
//         return operations;
//     }
// };