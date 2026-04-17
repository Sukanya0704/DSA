// class Solution {
// public:
//     int minMirrorPairDistance(vector<int>& nums) {
//         int min_dist = INT_MAX;
//         int n = nums.size();
//         map<string, int> mapping;

//         for(int i=0; i<n; i++){
//             string temp = to_string(nums[i]);
//             if(mapping.find(temp) != mapping.end()){
//                 auto it = mapping.find(temp);
//                 min_dist = min(min_dist, i - mapping[temp]);
//             }
//             reverse(temp.begin(), temp.end());
//             temp = to_string(stoll(temp));
//             mapping[temp] = i;
//         }

//         if(min_dist == INT_MAX){
//             return -1;
//         }else{
//             return min_dist;
//         }
//     }
// };