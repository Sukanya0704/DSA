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

//     long long gcdSum(vector<int>& nums) {
//         int n = nums.size();

//         vector<int> prefix_gcd(n);

//         int max_ele = -1;

//         for(int i=0; i<n; i++){
//             max_ele = max(max_ele, nums[i]);
//             prefix_gcd[i] = calculate_gcd(nums[i], max_ele);
//         } 

//         sort(prefix_gcd.begin(), prefix_gcd.end());

//         long long total_sum = 0;
//         int left = 0;
//         int right = n -1;

//         while(left < right){
//             total_sum += calculate_gcd(prefix_gcd[left], prefix_gcd[right]);
//             left++;
//             right--;
//         }

//         return total_sum;
//     }
// };