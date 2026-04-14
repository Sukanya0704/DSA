// class Solution {
// public:
//     long long solve(int i, int j, vector<int>& robot, vector<int>& fact_pos, vector<vector<long long>>& memo){
//         if(i == robot.size()) return 0;

//         if(j == fact_pos.size()) return 1e16;

//         if(memo[i][j] != -1) return memo[i][j];

//         long long distance = abs(robot[i] - fact_pos[j]);
//         long long assign = distance + solve(i+1, j+1, robot, fact_pos, memo);

//         long long skip = solve(i, j+1, robot, fact_pos, memo);

//         return memo[i][j] = min(assign, skip);
//     }
     
//     long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
//         long long min_dist = 0;

//         sort(robot.begin(), robot.end());
//         sort(factory.begin(), factory.end(), [](const auto& a, const auto& b){
//             return (a[0] < b[0]);
//         });

//         vector<int> fact_pos;
//         for(int i=0; i<factory.size(); i++){
//             int pos = factory[i][0];
//             int cap = factory[i][1];

//             for(int j=0; j<cap; j++){
//                 fact_pos.push_back(pos);
//             }
//         }

//         vector<vector<long long>> memo(robot.size(), vector<long long>(fact_pos.size(), -1));

//         return solve(0, 0, robot, fact_pos, memo);
//     }
// };