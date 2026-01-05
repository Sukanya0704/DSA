// class Solution {
// public:
//     vector<vector<string>> wordSquares(vector<string>& words) {
//         vector<vector<string>> ans;
//         vector<string> temp = words;
//         int n = words.size();

//         for(int i=0; i<n; i++){
//             string top = temp[i];

//             for(int j=0; j<n; j++){
//                 if(j==i) continue;
//                 string left = temp[j];
//                 if(top[0]!=left[0]) continue;

//                 for(int k=0; k<n; k++){
//                     if(k==i || k==j) continue;
//                     string right = temp[k];
//                     if(top[3]!=right[0]) continue;
                    

//                     for(int l=0; l<n; l++){
//                         if(l==i || l==j ||l==k) continue;
//                         string bottom = temp[l];
//                         if((bottom[0]==left[3]) && (bottom[3]== right[3])){
//                             ans.push_back({top,left,right,bottom});
//                         }
//                     }
//                 }
//             }
//         }
//         sort(ans.begin(), ans.end());
//         return ans;
//     }
// };