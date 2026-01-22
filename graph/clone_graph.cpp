// class Solution {
// public:
//     Node* cloneGraph(Node* node) {
//         if(node == nullptr) return nullptr;

//         Node* firstCloned = new Node(node->val);
//         unordered_map<Node*, Node*> old_to_new;

//         old_to_new[node] = firstCloned;

//         queue<Node*> q;
//         q.push(node);

//         while(!q.empty()){
//             Node* current_old = q.front();
//             q.pop();
//             for (Node* neighbor : current_old->neighbors) {
//                 if (old_to_new.find(neighbor) == old_to_new.end()) {
//                     old_to_new[neighbor] = new Node(neighbor->val);
//                     q.push(neighbor);
//                 }
//                 old_to_new[current_old]->neighbors.push_back(old_to_new[neighbor]);
//             }
//         }
//         return firstCloned;
//     }
// };