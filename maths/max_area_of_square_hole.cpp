// class Solution {
// public:
//     int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
//         sort(hBars.begin(), hBars.end());
//         sort(vBars.begin(), vBars.end());

//         int i=0;
//         int j=0;
//         int count1 = 1;
//         int count2 = 1;
//         int maxH = 1;
//         int maxV = 1;

//         while(i<hBars.size()-1 || j<vBars.size()-1){
//             if(i<hBars.size()-1){
//                 if(hBars[i+1]-hBars[i]==1){
//                     count1++;
//                 }else{
//                     maxH = max(maxH, count1);
//                     count1 = 1;
//                 }
//                 i++;
//             }
//             if(j<vBars.size()-1){
//                 if(vBars[j+1]-vBars[j]==1){
//                     count2++;
//                 }else{
//                     maxV = max(maxV, count2);
//                     count2 = 1;
//                 }
//                 j++;
//             }
//         }

//         maxH = max(maxH, count1);
//         maxV = max(maxV, count2);
//         int length = min(maxH+1, maxV+1);
//         return length*length;
//     }
// };