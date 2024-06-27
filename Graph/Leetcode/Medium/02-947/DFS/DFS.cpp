class Solution {
    int n;
    void DFS(vector<vector<int>>& stones, vector<int>& visited, int idx){
        visited[idx] = true; //visit the coordinate point (i, j)
        
        for(int i=0; i<n; i++){
            if(visited[i] == false){ //not visited coordinate point => visit it and give it a group
                if( (stones[idx][0] == stones[i][0]) || (stones[idx][1] == stones[i][1]) ){ //if row or col matches
                    DFS(stones, visited, i); //visite that coordinate
                }
            }
        }
    }
public:
    int removeStones(vector<vector<int>>& stones) {
        n = stones.size();
        vector<int> visited(n, false);
        int group=0;
        for(int i=0; i<n; i++){
            if(visited[i] == false){ //not visited coordinate point => visit it and give it a group
                DFS(stones, visited, i);
                group++;
            }
        }

        return (n - group);
    }
};