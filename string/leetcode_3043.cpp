// class Solution {
// public:
//     int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
//         unordered_set<int> prefixes;

//         for(int num : arr1){
//             while(num > 0){
//                 prefixes.insert(num);
//                 num /= 10;
//             }
//         }

//         int max_length = 0;

//         for(int num : arr2){
//             while(num > 0){
//                 if(prefixes.count(num)){
//                     int curr_length = to_string(num).length();
//                     max_length = max(max_length, curr_length);
//                     break;
//                 }
//                 num /= 10;
//             }
//         }

//         return max_length;
//     }
// };