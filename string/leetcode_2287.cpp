// class Solution {
// public:
//     int rearrangeCharacters(string s, string target) {
//         vector<int> freq(26, 0);
//         for(auto ch : s){
//             freq[ch - 'a']++;
//         }
//         map<int, int> target_freq;
//         for(auto ch : target){
//             target_freq[ch - 'a']++;
//         }
//         int ans = INT_MAX;

//         for(auto [ch, cnt] : target_freq){
//             ans = min(ans, freq[ch]/cnt);
//         }
//         return ans;
//     }
// };