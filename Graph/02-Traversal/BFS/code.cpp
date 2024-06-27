//{ Driver Code Starts
#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V,false);
        queue<int> q;
        int u = 0;
        q.push(u);
        vector<int> ans;
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            
            visited[u] = true;
            ans.push_back(u);
            
            for(auto v : adj[u]){
                if(visited[v] == false){ //Not visited yet
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    // Test case 1: A simple graph with 2 vertices and 1 edge
    {
        int V = 2;
        vector<int> adj[V];
        adj[0].push_back(1);
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    // Test case 2: A complex cyclic graph with 6 vertices and 6 edges
    {
        int V = 6;
        vector<int> adj[V];
        adj[0].push_back(1); adj[0].push_back(3);
        adj[1].push_back(0); adj[1].push_back(2);
        adj[2].push_back(1); adj[2].push_back(5);
        adj[3].push_back(0); adj[3].push_back(4);
        adj[4].push_back(3); adj[4].push_back(5);
        adj[5].push_back(2); adj[5].push_back(4);
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    // Test case 3: A complex non-cyclic graph with 6 vertices and 5 edges
    {
        int V = 6;
        vector<int> adj[V];
        adj[0].push_back(1);
        adj[1].push_back(0); adj[1].push_back(2); adj[1].push_back(3);
        adj[2].push_back(1);
        adj[3].push_back(1); adj[3].push_back(4);
        adj[4].push_back(3); adj[4].push_back(5);
        adj[5].push_back(4);
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
//Time Complexity: O(V+E) where V is the number of vertices in the graph and E is the number of edges in the graph.
//Space Complexity: O(V) where V is the number of vertices in the graph.

//Testcase 1:

// 0----1

//! IMP Testcase 2: 

// 0----1----2
// |         |
// 3----4----5

//Testcase 3:

//   0----1----2
//       |
//       3----4
//           |
//           5