// class Solution {
// public:
//     struct Process{
//         int pid;
//         int arrival_time;
//         int burst_time;

//         bool operator<(const Process& other) const{
//             if(burst_time == other.burst_time){
//                 return pid > other.pid;
//             }
//             return burst_time > other.burst_time;
//         }
//     };

//     vector<int> getOrder(vector<vector<int>>& tasks) {
//         int n = tasks.size();
//         vector<Process> processes(n);

//         for(int i=0; i<n; i++){
//             processes[i].pid = i;
//             processes[i].arrival_time = tasks[i][0];
//             processes[i].burst_time = tasks[i][1];
//         }

//         sort(processes.begin(), processes.end(), [](const Process& a, const Process& b){
//             return a.arrival_time < b.arrival_time;
//         });

//         priority_queue<Process> ready_queue;
//         vector<int> order;

//         long long time = 0;
//         int completed = 0;
//         int i = 0;

//         while(completed < n){
//             if(ready_queue.empty() && time < processes[i].arrival_time){
//                 time = processes[i].arrival_time;
//             }

//             while(i < n && processes[i].arrival_time <= time){
//                 ready_queue.push(processes[i]);
//                 i++;
//             }

//             Process current_process = ready_queue.top();
//             ready_queue.pop();
            
//             order.push_back(current_process.pid);
//             time += current_process.burst_time;
//             completed++;
//         }
//         return order;
//     }
// };