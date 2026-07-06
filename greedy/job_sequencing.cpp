// class Solution {
//   public:
//     int find(int node, vector<int>& parent){
//         if(node == parent[node]){
//             return node;
//         }
//         return parent[node] = find(parent[node], parent);
//     }
    
//     vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
//         // code here
//         int n = profit.size();a
//         vector<pair<int ,int>> jobs(n);
//         int max_deadline = INT_MIN;
//         for(int i=0; i<n; i++){
//             jobs[i].first = deadline[i];
//             jobs[i].second = profit[i];
//             max_deadline = max(max_deadline, jobs[i].first);
//         }
        
//         sort(jobs.begin(), jobs.end(), [](const auto& a, const auto& b){
//             return a.second > b.second;
//         });
        
//         int count = 0;
//         int total = 0;
        
//         vector<int> parent(max_deadline +1);
//         for(int i=0; i<=max_deadline; i++){
//             parent[i] = i;
//         }
        
//         for(int i=0; i<n; i++){
//             int available_slot = find(jobs[i].first, parent);
//             if(available_slot > 0){
//                 count++;
//                 total += jobs[i].second;
//                 parent[available_slot] = find(available_slot -1, parent);
//             }
//         }
        
//         return {count, total};
//     }
// };   