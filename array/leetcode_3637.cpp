// class Solution {
// public:
//     bool isTrionic(vector<int>& nums) {
//         int n = nums.size();
//         if (n < 4) return false; 

//         int i = 0;
//         bool break1 = false;
//         bool break2 = false; 

//         for (i = 0; i < n - 1; i++) {
//             if (nums[i + 1] < nums[i]) {
//                 if (i == 0) return false; 
//                 break1 = true;
//                 break;
//             } else if (nums[i] == nums[i + 1]) return false;
//         }

//         if (!break1) return false; 

//         int j;
//         for (j = i; j < n - 1; j++) {
//             if (nums[j + 1] > nums[j]) {
//                 break2 = true;
//                 break;
//             } else if (nums[j] == nums[j + 1]) return false;
//         }

//         if (!break2) return false; 

//         for (int k = j; k < n - 1; k++) {
//             if (nums[k + 1] < nums[k]) {
//                 return false;
//             } else if (nums[k] == nums[k + 1]) return false;
//         }

//         return true; 
//     }
// };