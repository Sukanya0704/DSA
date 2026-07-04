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

//     vector<int> nge(vector<int>& arr){
//         int n = arr.size();
//         vector<int> temp(n);
//         stack<int> s;
//         for(int i=n-1; i>=0; i--){
//             while(!s.empty() && arr[s.top()] <= arr[i]) s.pop();
//             if(s.empty()) temp[i] = n;
//             else temp[i] = s.top();
//             s.push(i);
//         }
//         return temp;
//     }

//     vector<int> pgee(vector<int>& arr){
//         int n = arr.size();
//         vector<int> temp(n);
//         stack<int> s;
//         for(int i=0; i<n; i++){
//             while(!s.empty() && arr[s.top()] < arr[i]) s.pop();
//             if(s.empty()) temp[i] = -1;
//             else temp[i] = s.top();
//             s.push(i);
//         }
//         return temp;
//     }

//     long long subArrayRanges(vector<int>& nums) {
//         vector<int> arr = nums;
//         int n = arr.size();
//         auto nse_ans = nse(arr);
//         auto psee_ans = psee(arr);
//         auto nge_ans = nge(arr);
//         auto pgee_ans = pgee(arr);

//         long long total1 = 0;
//         for(int i=0; i<n; i++){
//             int left = i - psee_ans[i];
//             int right = nse_ans[i] - i;

//             total1 = (total1 + (right * left * 1ll * arr[i]));
//         }

//         long long total2 = 0;
//         for(int i=0; i<n; i++){
//             int left = i - pgee_ans[i];
//             int right = nge_ans[i] - i;

//             total2 = (total2 + (right * left * 1ll * arr[i]));
//         }

//         return total2 - total1;
//     }
// };