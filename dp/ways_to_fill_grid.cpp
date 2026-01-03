// class Solution {
// public:
//     int numOfWays(int n) {
//         long long mod = 1000000007;
        
//         long long two = 6;   
//         long long three = 6;

//         for (int i = 1; i < n; i++) {
//             long long prevTwo = two;
//             long long prevThree = three;

//             two = (3 * prevTwo + 2 * prevThree) % mod;
//             three = (2 * prevTwo + 2 * prevThree) % mod;
//         }

//         return (two + three) % mod;
//     }
// };