// class Solution {
// public:
//     char findKthBit(int n, int k) {
//         vector<string> s(n);
//         s[0] = "0";

//         for(int i=1; i<n; i++){
//             string temp = s[i-1];

//             for(int j=0; j<temp.size(); j++){
//                 if(temp[j] == '0'){
//                     temp[j] = '1';
//                 }else{
//                     temp[j] = '0';
//                 }
//             }

//             reverse(temp.begin(), temp.end());
//             s[i] = s[i-1] + "1" + temp;
//         }

//         string ans = s[n-1];

//         return ans[k-1];
//     }
// };