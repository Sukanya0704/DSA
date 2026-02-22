// class Solution {
// public:
//     int binaryGap(int n) {
//         int gap = INT_MIN;

//         int i=0;
//         int first_occurence = -1;
//         int second_occurence = -1;
//         while(n > 0){
//             int temp = n&1;
//             if(temp == 1){
//                 if(first_occurence == -1){
//                     first_occurence = i;
//                 }
//                 else if(first_occurence !=-1 && second_occurence == -1){
//                     second_occurence = i;
//                 }
//                 else if(first_occurence !=-1 && second_occurence != -1){
//                     first_occurence = second_occurence;
//                     second_occurence = i;
//                 }
//             }
//             if(first_occurence !=-1 && second_occurence != -1){
//                 gap = max(gap, second_occurence - first_occurence);
//             }
//             n >>= 1;
//             i++;
//         }

//         return gap == INT_MIN ? 0 : gap;
//     }
// };