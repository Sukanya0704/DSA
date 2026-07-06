// class Solution {
//   public:
//     vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
//         // code here
//         int n = s.size();
//         vector<vector<int>> meets(n, vector<int>(3));
        
//         for(int i=0; i<n; i++){
//             meets[i][0] = s[i];
//             meets[i][1] = f[i];
//             meets[i][2] = i + 1;
//         }
        
//         sort(meets.begin(), meets.end(), [](const auto& a, const auto& b){
//             if (a[1] == b[1]) {
//                 return a[2] < b[2]; 
//             }
//             return b[1] > a[1];
//         });
        
//         vector<int> ans;
//         ans.push_back(meets[0][2]);
//         int free_time = meets[0][1];
        
//         for(int i=1; i<n; i++){
//             if(meets[i][0] > free_time){
//                 free_time = meets[i][1];
//                 ans.push_back(meets[i][2]);
//             }
//         }
//         sort(ans.begin(), ans.end());
        
//         return ans;
//     }
// };