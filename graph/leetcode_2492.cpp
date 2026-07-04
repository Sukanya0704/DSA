// class Solution {
// public:
//     int bfs(int node, vector<vector<pair<int, int>>>& adj, vector<int>& visited){
//         visited[node] = 1;
//         queue<int> q;
//         q.push(node);

//         int temp = INT_MAX;
//         while(!q.empty()){
//             int cur_node = q.front();
//             q.pop();

//             for(int i=0; i<adj[cur_node].size(); i++){
//                 int v = adj[cur_node][i].first;
//                 int w = adj[cur_node][i].second;

//                 temp = min(temp, w);
//                 if(visited[v] == 0){
//                     visited[v] = 1;
//                     q.push(v);
//                 }
//             }
//         }
//         return temp;
//     }

//     int minScore(int n, vector<vector<int>>& roads) {
//         vector<vector<pair<int, int>>> adj(n+1);
//         for(auto road : roads){
//             int u = road[0];
//             int v = road[1];
//             int weight = road[2];

//             adj[u].push_back({v, weight});
//             adj[v].push_back({u, weight});
//         }
       
//         vector<int> visited(n+1, 0);
//         int ans;
//         for(int i=1; i<n+1; i++){
//             if(visited[i] == 0){
//                 int temp = bfs(i, adj, visited);
//                 if(visited[1] == 1 && visited[n] == 1){
//                     ans = temp;
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };