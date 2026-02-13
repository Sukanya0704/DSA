// class Solution {
// public:
//     int longestBalanced(string s) {
//         int n = s.length();
//         int max_length = 0;

//         int cur = 0;
//         for(int i = 0; i < n; i++){
//             if(i > 0 && s[i] == s[i-1]){
//                 cur++;
//             } else {
//                 cur = 1;
//             }
//             max_length = max(max_length, cur);
//         }

//         unordered_map<int, int> map_ab, map_bc, map_ac;
//         unordered_map<long long, int> map_abc;

//         map_ab[0] = map_bc[0] = map_ac[0] = -1;
//         map_abc[0] = -1; 

//         int a = 0, b = 0, c = 0;

//         for(int i = 0; i < n; i++) {
//             if(s[i] == 'a') a++;
//             else if(s[i] == 'b') b++;
//             else if(s[i] == 'c') c++;

//             if(s[i] == 'c') {
//                 map_ab.clear();
//                 map_ab[a - b] = i; 
//             } else if(map_ab.count(a - b)) {
//                 max_length = max(max_length, i - map_ab[a - b]);
//             } else {
//                 map_ab[a - b] = i;
//             }

//             if(s[i] == 'b') {
//                 map_ac.clear();
//                 map_ac[a - c] = i;
//             } else if(map_ac.count(a - c)) {
//                 max_length = max(max_length, i - map_ac[a - c]);
//             } else {
//                 map_ac[a - c] = i; 
//             }

//             if(s[i] == 'a') {
//                 map_bc.clear();
//                 map_bc[b - c] = i;
//             } else if(map_bc.count(b - c)) {
//                 max_length = max(max_length, i - map_bc[b - c]);
//             } else {
//                 map_bc[b - c] = i;
//             }

//             long long d1 = (a - b);
//             long long d2 = (b - c);
//             long long state = (d1 << 32) | (unsigned int)d2;

//             if (map_abc.count(state)) {
//                 max_length = max(max_length, i - map_abc[state]);
//             } else {
//                 map_abc[state] = i;
//             }
//         }
//         return max_length;
//     }
// };