// class Solution {
// public:
//     long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
//         const long long INF = 1e15; 
//         vector<vector<long long>> graph(26, vector<long long>(26, INF));

//         for(int i = 0; i < 26; i++) graph[i][i] = 0;

//         for(int i = 0; i < original.size(); i++) {
//             int u = original[i] - 'a';
//             int v = changed[i] - 'a';
//             graph[u][v] = min(graph[u][v], (long long)cost[i]);
//         }

//         for(int k = 0; k < 26; k++) {
//             for(int i = 0; i < 26; i++) {
//                 for(int j = 0; j < 26; j++) {
//                     if (graph[i][k] < INF && graph[k][j] < INF) {
//                         graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
//                     }
//                 }
//             }
//         }

//         long long cost_to_destination = 0;
//         for(int i = 0; i < source.size(); i++) {
//             if(source[i] != target[i]) {
//                 long long c = graph[source[i] - 'a'][target[i] - 'a'];
//                 if(c >= INF) return -1; 
//                 cost_to_destination += c;
//             }
//         }
//         return cost_to_destination;
//     }
// };