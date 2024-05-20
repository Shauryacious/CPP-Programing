//{ Driver Code Starts
#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;

// } Driver Code Ends
class Solution {
    bool isCycleByDFS(vector<int> adj[], vector<bool>& visited, int u, int parent, int V){
        visited[u] = true;
        for(auto v : adj[u]){
            if(v == parent) continue; //dont visit parent node
            
            if(visited[v] == true){
                return true;
            }
            
            if(isCycleByDFS(adj, visited, v, u, V)){
                return true;
            }
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        
        for(int i=0; i<V; i++){
            if(visited[i] == false){ //node not visited
                if(isCycleByDFS(adj, visited, i, -1, V)){
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    // Test case 1
    {
        int V = 5;
        vector<int> adj[V];
        adj[0].push_back(1);
        adj[1].push_back(0); adj[1].push_back(2); adj[1].push_back(4);
        adj[2].push_back(1); adj[2].push_back(3);
        adj[3].push_back(2); adj[3].push_back(4);
        adj[4].push_back(1); adj[4].push_back(3);
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        cout << (ans ? "1\n" : "0\n");

        //Expected Output: 1
    }

    // Test case 2
    {
        int V = 4;
        vector<int> adj[V];
        adj[1].push_back(2);
        adj[2].push_back(1); adj[2].push_back(3);
        adj[3].push_back(2);
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        cout << (ans ? "1\n" : "0\n");

        //Expected Output: 0
    }


    return 0;
}

//Pictorial representation of the graph

//Test case 1:-

// 0----1----2
//      |    |
//      4----3

//Test case 2:-
// two node islands

//  0    
// 1----2----3