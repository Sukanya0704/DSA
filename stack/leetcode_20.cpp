// class Solution {
// public:
//     bool isValid(string s) {
//         stack <char> st;
//         for(auto ch : s){
//             if(ch == '(' || ch == '{' || ch == '['){
//                 st.push(ch);
//             }else if(ch == ')'){
//                 if(st.empty()) return false;
//                 char temp = st.top();
//                 st.pop();
//                 if(temp != '(') return false;
//             }else if(ch == '}'){
//                 if(st.empty()) return false;
//                 char temp = st.top();
//                 st.pop();
//                 if(temp != '{') return false;
//             }else{
//                 if(st.empty()) return false;
//                 char temp = st.top();
//                 st.pop();
//                 if(temp != '[') return false;
//             }
//         }
//         if(st.empty()) return true;
//         return false;
//     }
// };