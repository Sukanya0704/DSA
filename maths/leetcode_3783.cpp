// class Solution {
// public:
//     int mirrorDistance(int n) {
//         string temp = to_string(n);
//         reverse(temp.begin(), temp.end());
//         temp = to_string(stoll(temp));

//         int reverse_number = stoi(temp);
//         return (abs(n - reverse_number));
//     }
// };