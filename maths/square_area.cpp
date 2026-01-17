// class Solution {
// public:
//     int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
//         if(m==n){
//             return((m-1) * (n-1));
//         }

//         vector<int> h(hFences.size()+2);
//         vector<int> v(vFences.size()+2);
//         h[0] = 1;
//         v[0] = 1;
//         h[h.size()-1] = m;
//         v[v.size()-1] = n;

//         for(int i=0; i<hFences.size(); i++){
//             h[i+1] = hFences[i];
//         }

//         for(int i=0; i<vFences.size(); i++){
//             v[i+1] = vFences[i];
//         }

//         sort(h.begin(), h.end());
//         sort(v.begin(), v.end());

//         set<int> distances;
        
//         for(int i=0; i<h.size(); i++){
//             for(int j=i+1; j<h.size(); j++){
//                 distances.insert(h[j]-h[i]);
//             }
//         }

//         int max_side = INT_MIN;
//         for(int i=0; i<v.size(); i++){
//             for(int j=i+1; j<v.size(); j++){
//                 if(distances.find(v[j]-v[i])!=distances.end()){
//                     max_side = max(max_side, v[j]-v[i]);
//                 }
//             }
//         }

//         if(max_side == INT_MIN)return -1;
//         long long mod = 1000000007;
//         return (int)((1LL * max_side * max_side) % mod);
//     }
// };