// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int a = 0;
//         int b = 0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==0)a++;
//             if(nums[i]==1)b++;
//             }
//         for(int i=0; i<a;i++){
//             nums[i]=0;
//         }
//         for(int i=a; i<a+b;i++){
//             nums[i]=1;
//         }
//         for(int i=a+b; i<nums.size();i++){
//             nums[i]=2;
//         }
//     }
// };


// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int low = 0;
//         int mid = 0;
//         int high = nums.size()-1;

//         while(mid<=high){
//             if(nums[mid]==0){
//                 swap(nums[mid], nums[low]);
//                 mid++;
//                 low++;
//             }
//             else if(nums[mid]==1){
//                 mid++;
//             }
//             else{
//                 swap(nums[mid], nums[high]);
//                 high--;
//             }
//         }
//     }
// };