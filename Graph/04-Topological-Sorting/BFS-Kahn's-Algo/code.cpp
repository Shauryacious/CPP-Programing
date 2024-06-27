#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<stack>
using namespace std;

// } Driver Code Ends
class Solution{
public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) {
        queue<int> q;
        vector<int> inDegree(V, 0);
        vector<bool> visited(V, false);
        vector<int> ans;
        
        for(int u=0; u<V; u++){
            for(auto v : adj[u]){
                inDegree[v]++;
            }
        }
        
        for(int i=0; i<V; i++){
            if(inDegree[i]==0){
                q.push(i);
            }
        }
        
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
        
        return ans;
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
{
    int V = 3;
    vector<int> adj[V];
    adj[0].push_back(1);
    adj[1].push_back(2);
    Solution obj;
    vector<int> res = obj.topoSort(V, adj);
    cout << (check(V, res, adj) ? "1\n" : "0\n");
}

{
    int V = 6;
    vector<int> adj[V];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(3);
    adj[3].push_back(4);
    adj[4].push_back(5);
    Solution obj;
    vector<int> res = obj.topoSort(V, adj);
    cout << (check(V, res, adj) ? "1\n" : "0\n");
}
}

//Time Complexity: O(V+E)
//Space Complexity: O(V)

//Test Case 1:-
//Expected Output: 1

// 0 --> 1 --> 2

//Test Case 2:-
//Expected Output: 1

// 0 --> 1 --> 3 --> 4 --> 5
// |           ^
// v           |
// 2-----------


