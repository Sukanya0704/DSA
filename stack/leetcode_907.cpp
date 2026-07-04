// class Solution {
// public:
//     vector<int> nse(vector<int>& arr){
//         int n = arr.size();
//         vector<int> temp(n);
//         stack<int> s;
//         for(int i=n-1; i>=0; i--){
//             while(!s.empty() && arr[s.top()] >= arr[i]) s.pop();
//             if(s.empty()) temp[i] = n;
//             else temp[i] = s.top();
//             s.push(i);
//         }
//         return temp;
//     }

//     vector<int> psee(vector<int>& arr){
//         int n = arr.size();
//         vector<int> temp(n);
//         stack<int> s;
//         for(int i=0; i<n; i++){
//             while(!s.empty() && arr[s.top()] > arr[i]) s.pop();
//             if(s.empty()) temp[i] = -1;
//             else temp[i] = s.top();
//             s.push(i);
//         }
//         return temp;
//     }

//     int sumSubarrayMins(vector<int>& arr) {
//         int n = arr.size();
//         auto nse_ans = nse(arr);
//         auto psee_ans = psee(arr);

//         int total = 0;
//         int mod = 1e9 + 7;
//         for(int i=0; i<n; i++){
//             int left = i - psee_ans[i];
//             int right = nse_ans[i] - i;

//             total = (total + (right * left * 1ll * arr[i]) % mod) % mod;
//         }

//         return total;
//     }
// };