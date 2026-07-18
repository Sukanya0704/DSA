// class Solution {
// public:
//     int calculate_gcd(int a, int b){
//         while(b != 0){
//             int remainder = a % b;
//             a = b;
//             b = remainder;
//         }
//         return a;
//     }

//     int findGCD(vector<int>& nums) {
//         int min_ele = INT_MAX;
//         int max_ele = INT_MIN;

//         for(int i=0; i<nums.size(); i++){
//             if(nums[i] < min_ele) min_ele = nums[i];
//             if(nums[i] > max_ele) max_ele = nums[i];
//         }

//         return calculate_gcd(min_ele, max_ele);
//     }
// };