//{ Driver Code Starts
#include<iostream>
#include<vector>
#include<string>
using namespace std;

// } Driver Code Ends

class Solution {
    void DFS(vector<int> adj[], vector<bool>& visited, vector<int>& ans, int u, int V){
        if(visited[u] == true){ //if the node is alrady visited
            return;
        }
        //Else make this node as visited
        visited[u] = true;
        
        //Push into ans
        ans.push_back(u);
        //
        for(int i=0; i<adj[u].size(); i++){
            DFS(adj, visited, ans, adj[u][i], V);
        }
        
        return;
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans(V);
        ans.clear();
        vector<bool> visited(V, false);
        
        DFS(adj, visited, ans, 0, V);
        
        return ans;
        
    }
};



//{ Driver Code Starts.
int main() {
    // Test case 1: A graph with 7 vertices and 7 edges
    {
        int V = 7;
        vector<int> adj[V];
        adj[0].push_back(1); adj[0].push_back(3);
        adj[1].push_back(0); adj[1].push_back(2); adj[1].push_back(4);
        adj[2].push_back(1); adj[2].push_back(5);
        adj[3].push_back(0); adj[3].push_back(4); adj[3].push_back(6);
        adj[4].push_back(1); adj[4].push_back(3);
        adj[5].push_back(2);
        adj[6].push_back(3);
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    // Test case 2: A graph with 9 vertices and 9 edges
    {
        int V = 9;
        vector<int> adj[V];
        adj[0].push_back(1); adj[0].push_back(3);
        adj[1].push_back(0); adj[1].push_back(2); adj[1].push_back(4);
        adj[2].push_back(1); adj[2].push_back(5);
        adj[3].push_back(0); adj[3].push_back(4); adj[3].push_back(6);
        adj[4].push_back(1); adj[4].push_back(3); adj[4].push_back(5); adj[4].push_back(7);
        adj[5].push_back(2); adj[5].push_back(4);
        adj[6].push_back(3); adj[6].push_back(7);
        adj[7].push_back(4); adj[7].push_back(6); adj[7].push_back(8);
        adj[8].push_back(7);
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    // Test case 3: A non-cyclic graph with 10 vertices and 9 edges
    {
        int V = 10;
        vector<int> adj[V];
        adj[0].push_back(1);
        adj[1].push_back(0); adj[1].push_back(2); adj[1].push_back(5);
        adj[2].push_back(1); adj[2].push_back(3);
        adj[3].push_back(2); adj[3].push_back(4);
        adj[4].push_back(3);
        adj[5].push_back(1); adj[5].push_back(6);
        adj[6].push_back(5); adj[6].push_back(7); adj[6].push_back(8);
        adj[7].push_back(6);
        adj[8].push_back(6); adj[8].push_back(9);
        adj[9].push_back(8);
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends

//Testcase 1
//   0----1----2
//   |    |    |
//   3----4----5
//   |
//   6


//Testcase 2
// 0----1----2
// |    |    |
// 3----4----5
// |    |    |
// 6----7----8

//Testcase 3:

//   0----1----2----3----4
//       |
//       5----6----7
//           |
//           8----9