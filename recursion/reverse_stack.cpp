// class Solution {
//   public:
//     void insert_in_stack(stack<int>& st, int x){
//         if(st.empty()){
//             st.push(x);
//             return;
//         }
        
//         int top_ele = st.top();
//         st.pop();
        
//         insert_in_stack(st, x);
        
//         st.push(top_ele);
//     }
    
//     void reverseStack(stack<int> &st) {
//         // code here
//         if(st.empty()) return;
        
//         int top_ele = st.top();
//         st.pop();
        
//         reverseStack(st);
//         insert_in_stack(st, top_ele);
//     }
// };