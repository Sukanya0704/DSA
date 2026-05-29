// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int n = s.length();
//         int l = 0;
//         int r = 0;
//         vector<int> hash(26, 0);
//         int max_f = 0;
//         int max_l = 0;

//         while(r < n){
//             hash[s[r]-'A']++;
//             max_f = max(max_f, hash[s[r]-'A']);

//             while((r -l +1 - max_f) > k){
//                 hash[s[l]-'A']--;
//                 l++;
//                 max_f = 0;
//                 for(int i=0; i<26; i++){
//                     max_f = max(max_f, hash[i]);
//                 }
//             }

//             if((r -l +1 - max_f) <= k){
//                 max_l = max(max_l, r -l +1);
//             }

//             r++;
//         }

//         return max_l;
//     }
// };