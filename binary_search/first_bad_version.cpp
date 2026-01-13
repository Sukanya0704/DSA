// class Solution {
// public:
//     int firstBadVersion(int n) {
//         if(n==1) return 1;

//         int min_bad_version = INT_MAX;
//         int low = 1;
//         int high = n;
//         while(low <= high){
//             int mid = low + (high - low) / 2;
//             bool version = isBadVersion(mid);
//             if(version){
//                 min_bad_version = mid;
//                 high = mid-1;
//             }else{
//                 low = mid+1;
//             }
//         }
//         return min_bad_version;
//     }
// };