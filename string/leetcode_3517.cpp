// class Solution {
// public:
//     string smallestPalindrome(string s) {
//         int n = s.length();

//         if(n == 1) return s;

//         string temp = s.substr(0, n/2);
//         sort(temp.begin(), temp.end());
//         string temp_reverse = temp;
//         reverse(temp_reverse.begin(), temp_reverse.end());

//         if(n%2 == 1){
//             temp += s[n/2];
//         }

//         temp += temp_reverse;
//         return temp;
//     }
// };