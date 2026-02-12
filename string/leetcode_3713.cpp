// class Solution {
// public:
//     int longestBalanced(string s) {
//         int n = s.length();
//         int longest_substring = 1;

//         for(int i=0; i<n; i++){
//             map<char, int> count;
//             for(int j=i; j<n; j++){
//                 count[s[j]]++;

//                 int temp = count.begin()->second;
//                 bool consider_string = true;

//                 for(auto freq: count){
//                     if(freq.second != temp){
//                         consider_string = false;
//                         break;
//                     }
//                 }

//                 if(consider_string){
//                     longest_substring = max(longest_substring, j-i+1);
//                 }
//             }
//         }
//         return longest_substring;
//     }
// };