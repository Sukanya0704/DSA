// class Solution {
// public:
//     vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
//         int min_difference = INT_MAX;
//         sort(arr.begin(), arr.end());
//         for(int i=0; i<arr.size()-1; i++){
//             min_difference = min(min_difference , abs(arr[i]-arr[i+1]));
//         }

//         vector<vector<int>> ans;
//         for(int i=0; i<arr.size()-1; i++){
//             if(abs(arr[i]-arr[i+1]) == min_difference){
//                 ans.push_back({arr[i], arr[i+1]});
//             }
//         }
//         return ans;
//     }
// };