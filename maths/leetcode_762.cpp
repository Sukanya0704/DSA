// class Solution {
// public:
//     bool no_digits_prime(int n){
//         int digits_one = 0;
//         while(n > 0){
//             if(n&1 == 1) digits_one++;
//             n >>= 1;
//         }
//         if(digits_one == 2 || digits_one == 3 || digits_one == 5 || digits_one == 7 || digits_one == 11
//            || digits_one == 13 || digits_one == 17 || digits_one == 19){
//             return true;
//         }
//         return false;
//     }

//     int countPrimeSetBits(int left, int right) {
//         int count = 0;
//         for(int i = left; i <= right; i++){
//             if(no_digits_prime(i)){
//                 count++;
//             }
//         }
//         return count;
//     }
// };