class Solution {
    // Define the four possible directions to move in the maze
    // vector<vector<int>> directions = {{UP}, {DOWN}, {RIGHT}, {LEFT}};
    vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size(); // Number of rows in the maze
        int n = maze[0].size(); // Number of columns in the maze

        queue<pair<int, int> > q;

        // Start the BFS from the entrance point
        q.push(make_pair(entrance[0], entrance[1]));
        // Mark the entrance point as visited by changing it to '+'
        maze[entrance[0]][entrance[1]] = '+';

        // Initialize the level (distance from the entrance) as 0
        int level = 0;
        while(!q.empty()){
            int N = q.size();
            while(N--){
                pair<int, int> p = q.front();
                q.pop();

                int temp_i = p.first;
                int temp_j = p.second;
                // Check if the current point is within the maze FIRST!! to avoid TLE
                if(temp_i>=0 && temp_i<m && temp_j>=0 && temp_j<n){
                    // Check if the current point is not the entrance
                    if(temp_i != entrance[0] || temp_j != entrance[1]){
                        // Check if the current point is on the boundary of the maze
                        if(temp_i==0 || temp_i==(m-1) || temp_j==0 || temp_j==(n-1)){
                            // If it is, we have found the nearest exit
                            return level;
                        }
                    }
                }

                // Explore all possible directions from the current point
                for(auto dir : directions){
                    int i = temp_i + dir[0];
                    int j = temp_j + dir[1];

                    // Check if the new point is within the maze FIRST!! to avoid TLE
                    if(i>=0 && i<m && j>=0 && j<n){
                        // Check if the new point is not a wall
                        if(maze[i][j] != '+'){
                            // If it is not, add it to the queue and mark it as visited
                            q.push(make_pair(i, j));
                            maze[i][j] = '+';
                        }
                    }
                }
            }
            // Increase the level (distance from the entrance) by 1
            level++;
        }
        // If we have explored the entire maze and haven't found an exit, return -1
        return -1;
    }
};