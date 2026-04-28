// class Solution {
// public:
//     int mod = 1e9 + 7;
//     int countPaths(int n, vector<vector<int>>& roads) {
//         vector<long long> distance(n, 1e18);
//         vector<long long> ways(n, 0);
//         distance[0] = 0;
//         ways[0] = 1;

//         priority_queue<pair<long long,int>, vector<pair<long long, int>> , greater<pair<long long, int>>> pq;
//         pq.push({0, 0});

//         vector<vector<pair<int, int>>> adj(n);
//         for(auto road : roads){
//             int u = road[0];
//             int v = road[1];
//             int time = road[2];

//             adj[u].push_back({v, time});
//             adj[v].push_back({u, time});
//         }

//         int mod = (int)(1e9 + 7);
//         while(!pq.empty()){
//             long long dist = pq.top().first;
//             int node = pq.top().second;
//             pq.pop();

//             for(auto edge : adj[node]){
//                 int adj_node = edge.first;
//                 int weight = edge.second;

//                 if(weight + dist < distance[adj_node]){
//                     distance[adj_node] = weight + dist;
//                     ways[adj_node] = ways[node];
//                     pq.push({distance[adj_node], adj_node});
//                 }
//                 else if(weight + dist == distance[adj_node]){
//                     ways[adj_node] = (ways[adj_node] + ways[node]) % mod;
//                 }
//             }
//         }

//         return (ways[n-1] % mod);
//     }
// };