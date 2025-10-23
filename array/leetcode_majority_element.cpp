// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         map<int,int> freq;

//         for(int i=0; i<n; i++){
//             freq[nums[i]]++;
//         }

//         for(auto it : freq){
//             if(it.second > n/2){
//                 return (it.first);
//             }
//         }
//         return -1;
//     }
// };

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int cnt = 0;
//         int ele;

//         for(int i=0; i<n; i++){
//             if(cnt==0){
//                 cnt = 1;
//                 ele = nums[i];
//             }
//             else if(nums[i]==ele){
//                 cnt++;
//             }
//             else{
//                 cnt--;
//             }
//         }

//         int cnt1=0;
//         for(int i=0; i<n; i++){
//             if(nums[i]==ele)cnt1++;
//         }

//         if(cnt1 >= (n/2)) return ele;
//         return -1;
//     }
// };