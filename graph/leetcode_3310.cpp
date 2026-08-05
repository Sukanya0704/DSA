// class Solution {
// public:
//     vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
//         vector<vector<int>> adj(n);
//         for(auto invocation : invocations){
//             adj[invocation[0]].push_back(invocation[1]);
//         }

//         queue<int> q;
//         q.push(k);
//         vector<bool> visited(n, false);
//         visited[k] = true;

//         while(!q.empty()){
//             int top_ele = q.front();
//             q.pop();

//             for(auto node : adj[top_ele]){
//                 if(!visited[node]){
//                     q.push(node);
//                     visited[node] = true;
//                 }
//             }
//         }

//         bool can_remove = true;
//         for(int i=0; i<n; i++){
//             if(!visited[i]){
//                 for(auto node : adj[i]){
//                     if(visited[node]){
//                         can_remove = false;
//                         break;
//                     }
//                 }
//             }
//             if(!can_remove) break;
//         }

//         vector<int> ans;
//         if(can_remove){
//             for(int i=0; i<n; i++){
//                 if(!visited[i]) ans.push_back(i);
//             }
//         }
//         else{
//             for(int i=0; i<n; i++){
//                 ans.push_back(i);
//             }
//         }
//         return ans;
//     }
// };