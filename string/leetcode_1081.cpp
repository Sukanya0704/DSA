// class Solution {
// public:
//     string smallestSubsequence(string s) {
//         int n = s.length();

//         vector<int> last_index(26, 0);
//         for(int i=0; i<n; i++){
//             last_index[s[i]-'a'] = i;
//         }

//         vector<bool> seen(26, false);
//         string result = "";

//         for(int i=0; i<n; i++){
//             if(seen[s[i]-'a']) continue;

//             while(!result.empty() &&  result.back() > s[i] && last_index[result.back()-'a'] > i){
//                 seen[result.back()-'a'] = false;
//                 result.pop_back();
//             }

//             result += s[i];
//             seen[s[i]-'a'] = true;
//         }
//         return result;
//     }
// };