// class Solution {
// public:
//     struct TrieNode {
//         TrieNode* children[26] = {nullptr};
//         int id = -1;
//     };

//     TrieNode* root;
//     int nodeCount = 0;

//     int insert(const string& s) {
//         TrieNode* curr = root;
//         for (char ch : s) {
//             if (!curr->children[ch - 'a']) {
//                 curr->children[ch - 'a'] = new TrieNode();
//             }
//             curr = curr->children[ch - 'a'];
//         }
//         if (curr->id == -1) curr->id = nodeCount++;
//         return curr->id;
//     }

//     long long minimumCost(string source, string target, vector<string>& original, vector<string>& changed, vector<int>& cost) {
//         root = new TrieNode();
//         nodeCount = 0;

//         vector<pair<int, int>> edges;
//         for (int i = 0; i < original.size(); i++) {
//             int u = insert(original[i]);
//             int v = insert(changed[i]);
//             edges.push_back({u, v});
//         }

//         vector<vector<long long>> dist(nodeCount, vector<long long>(nodeCount, 1e18));
//         for (int i = 0; i < nodeCount; i++) dist[i][i] = 0;

//         for (int i = 0; i < edges.size(); ++i) {
//             dist[edges[i].first][edges[i].second] = min(dist[edges[i].first][edges[i].second], (long long)cost[i]);
//         }

//         for (int k = 0; k < nodeCount; k++) {
//             for (int i = 0; i < nodeCount; i++) {
//                 if (dist[i][k] == 1e18) continue;
//                 for (int j = 0; j < nodeCount; j++) {
//                     dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//                 }
//             }
//         }

//         int n = source.length();
//         vector<long long> dp(n + 1, 1e18);
//         dp[0] = 0;

//         for (int i = 0; i < n; i++) {
//             if (dp[i] == 1e18) continue;

//             if (source[i] == target[i]) {
//                 dp[i + 1] = min(dp[i + 1], dp[i]);
//             }

//             TrieNode *pS = root, *pT = root;
//             for (int j = i; j < n; ++j) {
//                 pS = pS->children[source[j] - 'a'];
//                 pT = pT->children[target[j] - 'a'];

//                 if (!pS || !pT) break;

//                 if (pS->id != -1 && pT->id != -1) {
//                     if (dist[pS->id][pT->id] != 1e18) {
//                         dp[j + 1] = min(dp[j + 1], dp[i] + dist[pS->id][pT->id]);
//                     }
//                 }
//             }
//         }
//         return dp[n] == 1e18 ? -1 : dp[n];
//     }
// };