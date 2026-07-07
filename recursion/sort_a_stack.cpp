// class Solution {
//   public:
//     void insert_at_stack(stack<int>& st, int ele){
//         if(st.empty() || st.top() <= ele) {
//             st.push(ele);
//             return;
//         }
        
//         int top_ele = st.top();
//         st.pop();
        
//         insert_at_stack(st, ele);
//         st.push(top_ele);
//     }
    
//     void sortStack(stack<int> &st) {
//         // code here
//         if(st.empty()) return;
        
//         int top_ele = st.top();
//         st.pop();
        
//         sortStack(st);
        
//         insert_at_stack(st, top_ele);
//     }
// };
