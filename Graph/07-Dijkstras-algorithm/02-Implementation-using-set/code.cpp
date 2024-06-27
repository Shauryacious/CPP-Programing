class Solution{
public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int source){
        
        //Set also saves infor in ascending ordered => set.begin() = lowest ele
        set < pair<int, int> > st;
        vector<int> ans(V, INT_MAX);
        
        ans[source] = 0; //Dist from Source to Source is 0
        st.insert({0, source}); //insert the pair of {d, source vertix} into the set
        
        while(!st.empty()){
            auto &it = *st.begin();
            int d = it.first;
            int u = it.second;
            st.erase(it);
            
            for(auto v : adj[u]){ // Now v is a vector of size 2 like {sink_node, weight_of_the_edge}
                int node = v[0]; //sink_node
                int wt = v[1]; //weight
                
                int total_d = wt + d;
                if(total_d < ans[node]){
                    //! Extra code to remove the old value from the set
                    if(ans[node] != INT_MAX){
                        st.erase({ans[node], node});
                        /*
                        auto iterator = st.find({ans[node], node})
                        st.erase(it);
                        */ 
                    }
                    
                    ans[node] = total_d;
                    
                    st.insert({total_d, node});
                }
            }
        }
        return ans;
    }
};
