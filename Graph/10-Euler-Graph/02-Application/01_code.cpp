class Solution {
    void DFS(int u, int V, vector<int> adj[], vector<bool>& visited){
        visited[u] = true;
        
        for(auto v : adj[u]){
            if(visited[v] == false){
                DFS(v, V, adj, visited);
            }
        }
    }
    
    bool isConnected(int V, vector<int> adj[]){
        // STEP 2) Start DFS from the first nonZero Degree Vertex
        int firstNonZeroDegreeVertex = -1;
        for(int i = 0; i < V; i++){
            if(adj[i].size() != 0){ //NonZero Degree Vertex
                firstNonZeroDegreeVertex = i;
                break;
            }
        }
        
        if (firstNonZeroDegreeVertex == -1) // If no edges in the graph
            return true;

        // STEP 3) Call DFS with that vertex, if all the nonZero Degree Vertex are visited by a single DFS then all the connected Vertices were in same island else we have separated island which are connected inside themselves and hence non-Eulerian-Graph
        vector<bool> visited(V, false);
        DFS(firstNonZeroDegreeVertex, V, adj, visited);
        
        // STEP 4) Check if all the NonZero Degree Vertices are visited in a single DFS call or not
        for(int i = 0; i < V; i++){
            if(adj[i].size() != 0){ //NonZero Degree Vertices check
                if(visited[i] == false){ //Not all Vertices are visited in a single call
                    return false;
                }
            }
        }
        
        return true;
    }
public:
    int isEulerCircuit(int V, vector<int> adj[]){
        // STEP 1) First Check that all the NonZero Degree Vertices are connected together
        if(!isConnected(V, adj)){
            return 0; //if we have separate island, with NonZero Degree of Vertices, then all edges can't be visited and hence non-Eulerian Graph
        }
        
        // STEP 5) Now Once we are assured that the given graph is a single connected component with may or may not some zero Degree Vertices, now we can count the number of odd Degree Vertices
        int oddDegreeVertices = 0;
        for(int i = 0; i < V; i++){
            if(adj[i].size() % 2 != 0){ //odd degree of vertex
                oddDegreeVertices++;
            }
        }
        
        if(oddDegreeVertices > 2){
            return 0; //Non Eulerian Graph
        }
        else if(oddDegreeVertices == 2){
            return 1; //Eulerian Path
        }
        else if(oddDegreeVertices == 0){
            return 2; //Eulerian Circuit
        }
        
        return -1;
    }
};

// Time Complexity: O(V+E)
