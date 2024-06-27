#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;

// } Driver Code Ends
class Solution {
    bool isCycleInDirectGraphByDFS(vector<int> adj[], vector<int>& visited, vector<int>& visitedInRecursion, int u){
        if(visitedInRecursion[u] == true){
            return true;
        }
        visitedInRecursion[u] = true;
        visited[u] = true;
        
        for(auto v : adj[u]){
            if(visitedInRecursion[v] == true){
                return true;
            }
            if(visited[v] == false){
                if(isCycleInDirectGraphByDFS(adj, visited, visitedInRecursion, v)){
                    return true;
                }
            }

        }
        visitedInRecursion[u] = false;
        return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCycle(int V, vector<int> adj[]) {
        // code here
        vector<int> visited(V, false);
        vector<int> visitedInRecursion(V, false);
        for(int i=0; i<V; i++){
            if(visited[i] == false){ //node not yet visited

                if(isCycleInDirectGraphByDFS(adj, visited, visitedInRecursion, i)){
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

{
    int V = 3;
    vector<int> adj[V];
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(2);
    Solution obj;
    bool ans = obj.isCycle(V, adj);
    cout << (ans ? "1\n" : "0\n");
}

{
    int V = 4;
    vector<int> adj[V];
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(0);
    Solution obj;
    bool ans = obj.isCycle(V, adj);
    cout << (ans ? "1\n" : "0\n");
}

{
    int V = 3;
    vector<int> adj[V];
    adj[0].push_back(1);
    adj[1].push_back(2);
    Solution obj;
    bool ans = obj.isCycle(V, adj);
    cout << (ans ? "1\n" : "0\n");
}

    return 0;
}

// } Driver Code Ends

// Time Complexity: O(V+E)
// Space Complexity: O(V) + O(V) + O(V) = O(V) [for visited, visitedInRecursion, adj]


// Test case 1 (Loop):

// 0---->1---->2----
//             ^    |  
//             ^----


// Test case 2 (Cycle):
// 0---->1
// |     |
// 3<----2


// Test case 3 (No Cycle):
// 0----1----2