// class Solution {
// public:
//     long long calculateHeight(long long baseTime, long long limit){
//         long long target = (2*limit) / baseTime;

//         long long x = (-1 + sqrt(1 + 4*target)) / 2;

//         return x;
//     }

//     bool canFinish(long long maxTime, int mountainHeight, vector<int>& workerTimes){
//         long long totalReduced = 0;

//         for(auto time : workerTimes){
//             totalReduced += calculateHeight(time, maxTime);
//             if(totalReduced >= mountainHeight) return true;
//         }

//         return totalReduced >= mountainHeight;
//     }

//     long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
//         long long low = 1;
//         long long high = 1e18;
//         long long result = high;

//         while(low <= high){
//             long long mid = low + (high - low)/2;
//             if(canFinish(mid, mountainHeight, workerTimes)){
//                 result = mid;
//                 high = mid -1;
//             }
//             else{
//                 low = mid +1;
//             }
//         }

//         return result;
//     }
// };