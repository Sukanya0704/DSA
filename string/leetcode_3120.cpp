// class Solution {
// public:
//     int numberOfSpecialChars(string word) {
//         int num = 0;

//         unordered_set<char> mp;
//         for(int i=0; i<word.size(); i++){
//             for(int j=0; j<word.size(); j++){
//                 if(abs(word[i]-word[j]) == 32){
//                     char temp = tolower(word[i]);
//                     mp.insert(temp);
//                 }
//             }
//         }

//         return mp.size();
//     }           
// };