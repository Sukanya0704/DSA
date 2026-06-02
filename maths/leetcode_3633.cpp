// class Solution {
// public:
//     int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
//         int min_time = INT_MAX;
//         int n = landStartTime.size();
//         int m = waterStartTime.size();

//         for(int i=0; i<n; i++){
//             for (int j=0; j<m; j++){
//                 int t1 = landStartTime[i] + landDuration[i];
                
//                 if(waterStartTime[j] <= t1){
//                     int t2 = waterDuration[j];
//                     min_time = min(min_time, t1+t2);
//                 }
//                 else{
//                     int t2 = waterStartTime[j] + waterDuration[j];
//                     min_time = min(min_time, t2);
//                 }
//             }
//         }

//         for(int i=0; i<m; i++){
//             for (int j=0; j<n; j++){
//                 int t1 = waterStartTime[i] + waterDuration[i];
                
//                 if(landStartTime[j] <= t1){
//                     int t2 = landDuration[j];
//                     min_time = min(min_time, t1+t2);
//                 }
//                 else{
//                     int t2 = landStartTime[j] + landDuration[j];
//                     min_time = min(min_time, t2);
//                 }
//             }
//         }

//         return min_time;
//     }
// };