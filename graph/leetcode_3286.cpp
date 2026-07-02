// class Solution {
// public:
//     bool findSafeWalk(vector<vector<int>>& grid, int health) {
//         int m = grid.size();
//         int n = grid[0].size();
//         vector<vector<int>> dist(m, vector<int>(n, INT_MIN));
//         dist[0][0] = health - grid[0][0];

//         priority_queue<pair<int, pair<int, int>>> pq;
//         pq.push({dist[0][0], {0, 0}});

//         int dx[] = {-1, 1, 0, 0};
//         int dy[] = {0, 0, -1, 1};

//         while(!pq.empty()){
//             int cur_health = pq.top().first;
//             int cur_x = pq.top().second.first;
//             int cur_y = pq.top().second.second;
//             pq.pop();

//             if(cur_health < dist[cur_x][cur_y]) continue;

//             for(int i=0; i<4; i++){
//                 int nx = cur_x + dx[i];
//                 int ny = cur_y + dy[i];

//                 if(nx >= 0 && nx < m && ny >= 0 && ny < n){
//                     int next_health = cur_health - grid[nx][ny];
//                     if(next_health >= 1 && next_health > dist[nx][ny]){
//                         dist[nx][ny] = next_health;
//                         pq.push({dist[nx][ny], {nx, ny}});
//                     }
//                 }
//             }
//         }

//         if(dist[m-1][n-1] > 0) {
//             return true;
//         }
//         return false;
//     }
// };