// class Solution {
// public:
//     int find(vector<int>& parent, int i){
//         if(parent[i] == i){
//             return i;
//         }
//         return parent[i] = find(parent, parent[i]);
//     }

//     void unite(vector<int>& parent, int i, int j){
//         int root_i = find(parent, i);
//         int root_j = find(parent, j);

//         if(root_i != root_j){
//             parent[root_i] = root_j; 
//         } 
//     }

//     int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
//         int n = source.size();
//         vector<int> parent(n);

//         iota(parent.begin(), parent.end(), 0);

//         for(const auto& swap : allowedSwaps){
//             unite(parent, swap[0], swap[1]);
//         }

//         unordered_map<int, vector<int>> components;
//         for(int i=0; i<n; i++){
//             components[find(parent, i)].push_back(i);
//         }

//         int total_matches = 0;
//         for(auto const& [root, indices] : components){
//             unordered_map<int, int> freq;

//             for(int idx : indices){
//                 freq[source[idx]]++;
//             }

//             for (int idx : indices) {
//                 if (freq[target[idx]] > 0) {
//                     total_matches++;
//                     freq[target[idx]]--;
//                 }
//             }
//         }

//         return n - total_matches;
//     }
// };