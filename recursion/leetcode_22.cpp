// class Solution {
// public:
//     void solve(int n, int open_count, int closed_count, string cur_string, vector<string>& result){
//         if(cur_string.length() == 2*n){
//             result.push_back(cur_string);
//             return;
//         }
//         if(open_count < n){
//             solve(n, open_count +1, closed_count, cur_string + "(", result);
//         }
//         if(closed_count < open_count){
//             solve(n, open_count , closed_count +1, cur_string + ")", result);
//         }
//     }

//     vector<string> generateParenthesis(int n) {
//         vector<string> result;
//         string cur_string = "";

//         solve(n, 0, 0, cur_string, result);
        
//         return result;
//     }
// };