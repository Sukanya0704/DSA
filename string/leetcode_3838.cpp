// class Solution {
// public:
//     string mapWordWeights(vector<string>& words, vector<int>& weights) {
//         string ans = "";

//         for(auto word : words){
//             int sum = 0;
//             for(int i=0; i<word.size(); i++){
//                 sum += weights[word[i] - 'a'];
//             }
//             sum %= 26;
//             int idx = 26 - sum - 1;
//             char alp = 'a' + idx;
//             ans += alp;
//         }
//         return ans;
//     }
// };