// class Solution {
// public:
//     vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
//         int mod = 1e9 + 7;
//         int n = s.length();
    
//         vector<int> non_zero_idx;
//         vector<long long> prefix_sum;
//         vector<long long> prefix_val;

//         long long current_sum = 0;
//         long long current_val = 0;

//         non_zero_idx.push_back(-1);
//         prefix_sum.push_back(0);
//         prefix_val.push_back(0);

//         for(int i= 0; i<n; i++){
//             if(s[i] != '0'){
//                 non_zero_idx.push_back(i);
//                 int digit = s[i] - '0';

//                 current_sum = (current_sum + digit) % mod;
//                 prefix_sum.push_back(current_sum);

//                 current_val = (current_val * 10 + digit) % mod;
//                 prefix_val.push_back(current_val);
//             }
//         }

//         int m = non_zero_idx.size() - 1;
//         vector<long long> pow10(m+1, 1);
//         for(int i=1; i<=m; i++){
//             pow10[i] = (pow10[i-1] * 10) % mod;
//         }

//         vector<int> ans;
//         for(auto q : queries){
//             int l = q[0];
//             int r = q[1];

//             auto it_start = lower_bound(non_zero_idx.begin(), non_zero_idx.end(),
//             l);
//             auto it_end = upper_bound(non_zero_idx.begin(), non_zero_idx.end(), r);

//             int start = distance(non_zero_idx.begin(), it_start);
//             int end = distance(non_zero_idx.begin(), it_end) - 1;

//             long long range_sum = (prefix_sum[end] - prefix_sum[start -1] + mod) % mod;
//             int length = end - start + 1;

//             long long subtract_part = (prefix_val[start - 1] * pow10[length]) % mod;

//             long long range_val = (prefix_val[end] - subtract_part + mod) % mod;

//             long long result = (range_sum *  range_val) % mod;
//             ans.push_back((int)result);
//         }
//         return ans;
//     }
// };