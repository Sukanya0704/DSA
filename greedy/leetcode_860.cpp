// class Solution {
// public:
//     bool lemonadeChange(vector<int>& bills) {
//         int five_change = 0;
//         int ten_change = 0;
//         int twenty_change = 0;

//         for(int i=0; i<bills.size(); i++){
//             if(bills[i] == 5) five_change++;
//             else if(bills[i] == 10){
//                 if(five_change >= 1){
//                     five_change--;
//                     ten_change++;
//                 }
//                 else{
//                     return false;
//                 }
//             }
//             else{
//                 if(five_change >=1 && ten_change >= 1){
//                     five_change--;
//                     ten_change--;
//                     twenty_change++;
//                 }
//                 else if(five_change >=3){
//                     five_change -= 3;
//                     twenty_change++;
//                 }
//                 else{
//                     return false;
//                 }
//             }
//         }

//         return true;
//     }
// };