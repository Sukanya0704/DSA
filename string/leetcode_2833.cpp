// class Solution {
// public:
//     int furthestDistanceFromOrigin(string moves) {
//         int n = moves.length();
//         int l_count = 0;
//         int r_count = 0;

//         for(int i=0; i<n; i++){
//             if(moves[i] == 'L') l_count++;
//             else if(moves[i] == 'R') r_count++;
//         }

//         for(int i=0; i<n; i++){
//             if(moves[i] == '_'){
//                 if(l_count >= r_count) moves[i] = 'L';
//                 else moves[i] = 'R';
//             }
//         }

//         int point = 0;
//         for(int i=0; i<n; i++){
//             if(moves[i] == 'L') point++;
//             else point--;
//         }

//         return abs(point);
//     }
// };