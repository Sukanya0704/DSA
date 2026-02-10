// class Solution {
// public:
//     vector<int> dijkstra(int start, int n, const vector<vector<pair<int, int>>>& adj){
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
//         pq.push({0, start});

//         vector<int> distance(n + 1, 1e9);
//         distance[start] = 0;

//         while(!pq.empty()){
//             int dist = pq.top().first;
//             int node = pq.top().second;
//             pq.pop();

//             if (dist > distance[node]) continue;

//             for(auto& edge : adj[node]){
//                 int v = edge.first;
//                 int weight = edge.second;

//                 if(distance[v] > dist + weight){
//                     distance[v] = dist + weight;
//                     pq.push({distance[v], v});
//                 }
//             }
//         }
//         return distance;
//     }

//     int networkDelayTime(vector<vector<int>>& times, int n, int k) {
//         vector<vector<pair<int,int>>> adj(n + 1);
//         for(auto& time : times){
//             adj[time[0]].push_back({time[1], time[2]});
//         }

//         vector<int> distance = dijkstra(k, n, adj);

//         int max_dist = 0;
//         for (int i = 1; i <= n; i++) {
//             if (distance[i] == 1e9) return -1; 
//             max_dist = max(max_dist, distance[i]);
//         }

//         return max_dist;
//     }
// };