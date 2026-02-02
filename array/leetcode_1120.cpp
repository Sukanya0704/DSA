// class Solution {
// public:
//     long long current_sum = 0;
//     set<pair<int, int>> right_set, left_set;
//     int m;

//     void balance(){
//         while(left_set.size() < m && !right_set.empty()){
//             auto it = right_set.begin();
//             current_sum += it->first;
//             left_set.insert(*it);
//             right_set.erase(it);
//         }

//         while (!left_set.empty() && !right_set.empty() && 
//                prev(left_set.end())->first > right_set.begin()->first) {
            
//             auto itL = prev(left_set.end());
//             auto itR = right_set.begin();

//             pair<int, int> valL = *itL;
//             pair<int, int> valR = *itR;

//             current_sum -= valL.first;
//             current_sum += valR.first;

//             left_set.erase(itL);
//             right_set.erase(itR);

//             left_set.insert(valR);
//             right_set.insert(valL);
//         }

//         while(left_set.size() > m){
//             auto it = prev(left_set.end());
//             current_sum -= it->first;
//             right_set.insert(*it);
//             left_set.erase(it);
//         }


//     }

//     long long minimumCost(vector<int>& nums, int k, int dist) {
//         int n = nums.size();
//         m = k-1;

//         for(int i=1; i<=dist+1; i++){
//             right_set.insert({nums[i], i});
//         }
//         balance();

//         long long min_total_cost = nums[0] + current_sum;

//         for(int j=dist+2; j<n; j++){
//             int out_index = j-dist-1;

//             pair<int,int> out_pair = {nums[out_index], out_index};

//             if(left_set.count(out_pair)){
//                 current_sum -= out_pair.first;
//                 left_set.erase(out_pair);
//             }else{
//                 right_set.erase(out_pair);
//             }

//             right_set.insert({nums[j], j});
//             balance();

//             min_total_cost = min(min_total_cost, (long long)nums[0] + current_sum);
//         }
//         return min_total_cost;
//     }
// };