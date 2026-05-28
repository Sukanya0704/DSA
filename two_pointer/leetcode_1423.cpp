// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int n = cardPoints.size();
//         int lsum = 0, rsum = 0, sum;

//         for(int i = 0; i < k; i++){
//             lsum += cardPoints[i];
//         }
        
//         sum = lsum;
//         int rindex = n - 1;
        
//         for(int i = k - 1; i >= 0; i--){
//             lsum -= cardPoints[i];
//             rsum += cardPoints[rindex];
//             rindex--;

//             sum = max(sum, lsum + rsum);
//         }

//         return sum;
//     }
// };