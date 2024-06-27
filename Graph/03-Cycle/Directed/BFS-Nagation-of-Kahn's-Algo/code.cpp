#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        queue<int> q;
        vector<int> inDegree(V, 0);
        
        for(int u=0; u<V; u++){
            for(auto v : adj[u]){
                inDegree[v]++;
            }
        }
        
        int count = 0;
        
        for(int i=0; i<V; i++){
            if(inDegree[i]==0){
                q.push(i);
            }
        }
        
        vector<int> ans;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            
            ans.push_back(u);
            
            for(auto v : adj[u]){
                inDegree[v]--;
                
                if(inDegree[v]==0){
                    q.push(v);
                }
            }
        }
        
        //! JUST CHECK THIS
        // if Cycle is present the topological sort array will have less than V nodes as Kahn's Algo is valid on DAG = Directed Acyclic Graph
        if(ans.size() == V){
            return false;
        }
        return true;
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