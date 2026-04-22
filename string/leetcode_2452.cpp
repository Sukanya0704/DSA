// class Solution {
// public:
//     vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
//         vector<string> ans;

//         for (int i = 0; i < queries.size(); i++) {
//             string currentQuery = queries[i];
//             for (int j = 0; j < dictionary.size(); j++) {
//                 string wordInDict = dictionary[j];
//                 if (currentQuery.length() == wordInDict.length()) {
//                     int diff = 0;
//                     for (int k = 0; k < currentQuery.length(); k++) {
//                         if (currentQuery[k] != wordInDict[k]) {
//                             diff++;
//                         }
//                         if (diff > 2) break; 
//                     }

//                     if (diff <= 2) {
//                         ans.push_back(currentQuery);
//                         break; 
//                     }
//                 }
//             }
//         }

//         return ans;
//     }
// };