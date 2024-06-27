//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int source)
    {
        priority_queue< pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
        vector<int> ans(V, INT_MAX);
        
        ans[source] = 0; //Dist from Source to Source is 0
        pq.push({0, source}); //push the {d, source vertix} into the pq
        
        while(!pq.empty()){
            pair<int, int> p = pq.top();
            int d = p.first;
            int u = p.second;
            pq.pop();
            
            for(auto v : adj[u]){ // Now v is a vector of size 2 like {sink_node, weight_of_the_edge}
                int node = v[0]; //sink_node
                int wt = v[1]; //weight
                
                int total_d = wt + d;
                
                if(total_d < ans[node]){
                    ans[node] = total_d;
                    
                    pq.push({total_d, node});
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends