// class Solution {
// public:
//     int numberOfSpecialChars(string word) {
//         vector<int> lastLower(26, -1);
//         vector<int> firstUpper(26, -1);

//         for(int i=0; i<word.size(); i++){
//             if(word[i] >= 'a' && word[i] <= 'z'){
//                 int index = word[i] - 'a';
//                 lastLower[index] = i;
//             }
//             else if(word[i] >= 'A' && word[i] <= 'Z'){
//                 int index = word[i] - 'A';
//                 if(firstUpper[index] == -1){
//                     firstUpper[index] = i;
//                 }
//             }
//         }

//         int cnt = 0;
//         for(int i=0; i<26; i++){
//             if(firstUpper[i] !=-1 && lastLower[i] !=-1 && lastLower[i] < firstUpper[i]) cnt++;
//         }

//         return cnt;
//     }
// };