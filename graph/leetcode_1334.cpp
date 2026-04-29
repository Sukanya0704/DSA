// class Solution {
// public:
//     int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
//         vector<vector<int>> dist(n, vector<int>(n, 1e9));
//         for(auto edge : edges){
//             int u = edge[0];
//             int v = edge[1];
//             int wt = edge[2];

//             dist[u][v] = wt;
//             dist[v][u] = wt;
//         }

//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 if(i == j){
//                     dist[i][j] = 0;
//                 }
//             }
//         }

//         for(int k=0; k<n; k++){
//             for(int i=0; i<n; i++){
//                 for(int j=0; j<n; j++){
//                     if(dist[i][k] == 1e9 && dist[k][j] == 1e9)continue;
//                     dist[i][j] = min(dist[i][j], (dist[i][k] + dist[k][j]));
//                 }
//             }
//         }

//         int city_count = n;
//         int city_no = -1;

//         for(int city=0; city<n; city++){
//             int cnt = 0;
//             for(int adj_city=0; adj_city<n; adj_city++){
//                 if(dist[city][adj_city] <= distanceThreshold) cnt++;
//             }
//             if(cnt <= city_count){
//                 city_count = cnt;
//                 city_no = city;
//             }
//         }

//         return city_no;
//     }
// };