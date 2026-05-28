// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         int n = fruits.size();
//         int max_fruits = 0;
//         map<int, int> mpp;
//         int l = 0;
//         int r = 0;

//         while(r < n){
//             mpp[fruits[r]]++;
//             if(mpp.size() > 2){
//                 mpp[fruits[l]]--;
//                 if(mpp[fruits[l]] == 0) mpp.erase(fruits[l]);
//                 l++;
//             }

//             if(mpp.size() <= 2){
//                 max_fruits = max(max_fruits, r -l +1);
//             }
//             r++;
//         }

//         return max_fruits;
//     }
// };