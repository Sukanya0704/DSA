// class Solution {
// public:
//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
//         vector<vector<pair<int, int>>> adj(n);

//         for(auto flight : flights){
//             int from = flight[0];
//             int to = flight[1];
//             int price = flight[2];

//             adj[from].push_back({to, price});
//         }

//         vector<int> distance(n, 1e9);
//         distance[src] = 0;
//         queue<pair<int, pair<int,int>>> q;
//         q.push({0, {src, 0}});

//         while(!q.empty()){
//             auto temp = q.front();
//             q.pop();
//             int stops = temp.first;
//             int node = temp.second.first;
//             int dist = temp.second.second;

//             if(stops > k) break;

//             for(auto route : adj[node]){
//                 int adj_node = route.first;
//                 int edge_weight = route.second;

//                 if(edge_weight + dist < distance[adj_node]){
//                     distance[adj_node] = edge_weight + dist;
//                     q.push({stops+1, {adj_node, edge_weight + dist}});
//                 }
//             }
//         }

//         if(distance[dst] == 1e9) return -1;
//         return distance[dst];
//     }
// };