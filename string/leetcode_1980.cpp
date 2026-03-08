// class Solution {
// public:
//     string findDifferentBinaryString(vector<string>& nums) {
//         int n = nums[0].length();
//         unordered_set<string> seen(nums.begin(), nums.end());
//         int total = 1 << n; 

//         for (int i = 0; i < total; i++) {
//             string curr = "";
//             for (int j = n - 1; j >= 0; j--) {
//                 curr += ((i >> j) & 1) ? '1' : '0';
//             }

//             if (seen.find(curr) == seen.end()) {
//                 return curr; 
//             }
//         }

//         return "";
//     }
// };