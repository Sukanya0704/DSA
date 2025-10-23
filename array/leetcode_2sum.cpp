// // if you want to use 2 pointer technique you can store value and index in pair vector<pair<int, int>> and then sort and apply the logic accordingly.
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> mpp;

//         for(int i=0; i<nums.size(); i++){
//             int complement = target - nums[i];

//             if(mpp.find(complement)!=mpp.end()){
//                 return{mpp[complement], i};
//             }

//             mpp[nums[i]] = i;
//         }
//         return{};
//     }
// };