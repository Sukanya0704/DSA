// class Solution {
// public:
//     void bfs(vector<vector<char>>& grid, vector<vector<int>>& visited, int x, int y){
//         int dx[] = {-1, 1, 0, 0}; 
//         int dy[] = {0, 0, -1, 1};

//         queue<pair<int, int>> q;
//         q.push({x, y});
//         visited[x][y] = 1;

//         while(!q.empty()){
//             pair<int, int> curr = q.front();
//             q.pop(); 
            
//             int temp_x = curr.first;
//             int temp_y = curr.second;

//             for(int i = 0; i < 4; i++){ 
//                 int nx = temp_x + dx[i];
//                 int ny = temp_y + dy[i];

//                 if(nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size() && 
//                    visited[nx][ny] == 0 && grid[nx][ny] == '1'){
                    
//                     visited[nx][ny] = 1;
//                     q.push({nx, ny});
//                 }
//             }
//         }
//     }

//     int numIslands(vector<vector<char>>& grid) {
//         if(grid.empty()) return 0;
        
//         int rows = grid.size();
//         int cols = grid[0].size();
//         vector<vector<int>> visited(rows, vector<int>(cols, 0));
//         int count = 0;

//         for(int i = 0; i < rows; i++){
//             for(int j = 0; j < cols; j++){
//                 if(grid[i][j] == '1' && visited[i][j] == 0){
//                     bfs(grid, visited, i, j);
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };