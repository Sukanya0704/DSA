// class Solution {
// public:
//     void solve(int n, string cur_string, vector<string>& ans){
//         if(cur_string.length() == n){
//             ans.push_back(cur_string);
//             return;
//         }
//         char last = cur_string.back();
//         if(last == '0'){
//             solve(n, cur_string + '1', ans);
//         }else{
//             solve(n, cur_string + '0', ans);
//             solve(n, cur_string + '1', ans);
//         }
//     }
//     vector<string> validStrings(int n) {
//         vector<string> ans;
        
//         solve(n, "0", ans);
//         solve(n, "1", ans);

//         return ans;
//     }
// };