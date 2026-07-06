// class Solution {
// public:
//     int removeCoveredIntervals(vector<vector<int>>& intervals) {
//         sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b){
//             if(a[0] == b[0]){
//                 return a[1] > b[1];
//             }
//             return a[0] < b[0];
//         });

//         int start = intervals[0][0];
//         int end = intervals[0][1];

//         int count = 0;
//         for(int i=1; i<intervals.size(); i++){
//             if(intervals[i][0] >= start && intervals[i][1] <= end) count++;
//             else{
//                 start = intervals[i][0];
//                 end = intervals[i][1];
//             }
//         }

//         return intervals.size() - count;
//     }
// };