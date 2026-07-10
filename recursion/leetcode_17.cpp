// class Solution {
// public:
//     void solve(int idx, string digits, string temp, vector<string>& ans, map<char, string>& mpp){
//         if(temp.length() == digits.length()){
//             ans.push_back(temp);
//             return;
//         }

//         string temp_1 = mpp[digits[idx]];

//         for(auto ch : temp_1){
//             temp += ch;
//             solve(idx+1, digits, temp, ans, mpp);
//             temp.pop_back();
//         }
//     }

//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         string temp = "";
//         map<char, string> num_to_letter;

//         num_to_letter['2'] = "abc";
//         num_to_letter['3'] = "def";
//         num_to_letter['4'] = "ghi";
//         num_to_letter['5'] = "jkl";
//         num_to_letter['6'] = "mno";
//         num_to_letter['7'] = "pqrs";
//         num_to_letter['8'] = "tuv";
//         num_to_letter['9'] = "wxyz";

//         solve(0, digits, temp, ans, num_to_letter);

//         return ans;
//     }
// };