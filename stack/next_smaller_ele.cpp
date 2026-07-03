// class Solution {
//   public:
//     vector<int> nextSmallerEle(vector<int>& arr) {
//         //  code here
//         int n = arr.size();
//         vector<int> nse(n);
//         stack<int> s;
        
//         for(int i=n-1; i>=0; i--){
//             while(!s.empty() && s.top() >= arr[i]) s.pop();
//             nse[i] = s.empty() ? -1 : s.top();
//             s.push(arr[i]);
//         }
//         return nse;
//     }
// };