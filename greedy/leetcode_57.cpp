// class Solution {
// public:
//     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//         stack<pair<int, int>> st;
//         st.push({newInterval[0], newInterval[1]});
        
//         for(int i=0; i<intervals.size(); i++){
//             int first = st.top().first;
//             int second = st.top().second;

//             if(first > intervals[i][0]){
//                 if(first <=  intervals[i][1]){
//                     st.pop();
//                     st.push({min(first, intervals[i][0]), max(second, intervals[i][1])});
//                 }else{
//                     st.pop();
//                     st.push({intervals[i][0],intervals[i][1]});
//                     st.push({first, second});
//                 }
//             }
//             else{
//                 if(second < intervals[i][0]){
//                     st.push({intervals[i][0],intervals[i][1]});
//                 }else{
//                     st.pop();
//                     st.push({min(first, intervals[i][0]), max(second, intervals[i][1])});
//                 }
//             }
//         }

//         vector<vector<int>> ans;
//         while (!st.empty()) {
//             pair<int, int> p = st.top(); 
//             st.pop();
    
//             ans.insert(ans.begin(), {p.first, p.second});
//         } 
//         return ans;
//     }
// };