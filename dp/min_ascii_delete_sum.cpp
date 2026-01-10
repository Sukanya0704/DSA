// class Solution {
// public:
//     int solve(string& s1, string& s2, int i, int j, vector<vector<int>>& dp) {
//         if (i == s1.length()) {
//             int sum = 0;
//             for (int k = j; k < s2.length(); k++) {
//                 sum += (int)s2[k];
//             }
//             return sum;
//         }
//         if (j == s2.length()) {
//             int sum = 0;
//             for (int k = i; k < s1.length(); k++) {
//                 sum += (int)s1[k];
//             }
//             return sum;
//         }
//         if (dp[i][j] != -1) return dp[i][j];

//         if (s1[i] == s2[j]) {
//             return dp[i][j] = solve(s1, s2, i + 1, j + 1, dp);
//         }
//         int delete1 = (int)s1[i] + solve(s1, s2, i + 1, j, dp);
//         int delete2 = (int)s2[j] + solve(s1, s2, i, j + 1, dp);

//         return dp[i][j] = min(delete1, delete2);
//     }

//     int minimumDeleteSum(string s1, string s2) {
//         int n = s1.length();
//         int m = s2.length();
//         vector<vector<int>> dp(n, vector<int>(m, -1));
//         return solve(s1, s2, 0, 0, dp);
//     }
// };