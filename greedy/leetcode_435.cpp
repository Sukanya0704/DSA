// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b){
//             return a[1] < b[1];
//         });

//         int last_idx = intervals[0][1];
//         int count = 1;
//         for(int i=1; i<intervals.size(); i++){
//             if(intervals[i][0] >= last_idx){
//                 count++;
//                 last_idx = intervals[i][1];
//             }
//         }
//         return (intervals.size() - count);
//     }
// };