// class Solution {
// public:
//     int minCost(int n, vector<vector<int>>& edges) {
//         vector<vector<pair<int, int>>> adj(n);

//         for (auto& edge : edges) {
//             int u = edge[0];
//             int v = edge[1];
//             int w = edge[2];
            
//             adj[u].push_back({v, w});
//             adj[v].push_back({u, 2 * w});
//         }

//         vector<long long> min_dis(n, LLONG_MAX);
//         min_dis[0] = 0;

//         priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
//         pq.push({0, 0});

//         while (!pq.empty()) {
//             auto [d, u] = pq.top();
//             pq.pop();

//             if (d > min_dis[u]) continue;

//             for (auto& edge : adj[u]) {
//                 int v = edge.first;
//                 int w = edge.second;
//                 if (d + w < min_dis[v]) {
//                     min_dis[v] = d + w;
//                     pq.push({min_dis[v], v});
//                 }
//             }
//         }

//         return min_dis[n - 1] == LLONG_MAX ? -1 : (int)min_dis[n - 1];
//     }
// };