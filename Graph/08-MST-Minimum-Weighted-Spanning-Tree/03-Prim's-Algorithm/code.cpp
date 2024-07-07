class Solution{
public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]){
        //Priority Queue
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>> > pq;
        
        //Visited Array => Is Now In MST
        vector<bool> visited(V, false);
        
        //parent array
        vector<int> parent_array(V, -1);
        
        //Initialize in first push
        pq.push({0, 0, -1}); // { wt, node, parent }
        
        
        int sum = 0;
        while(!pq.empty()){ //E times while loop (cause priority queue will have E elements in it)
            auto p = pq.top(); // p = { wt, node, parent }
            pq.pop(); //T.C. => O(logE)
            
            int wt = p[0];
            int node = p[1];
            int parent = p[2];
            
            
            if(visited[node] == false){
                visited[node] = true; //visit it and make it the part of MST
                parent_array[node] = parent;
                sum += wt;
                
                for(auto vector_of_pair : adj[node]){
                    int child_node = vector_of_pair[0];
                    int weight = vector_of_pair[1];
                    
                    if(visited[child_node] == false){ //Not visited
                        pq.push({weight, child_node, node}); // T.C. => O(logE)
                    }
                }
            }
        }
        return sum;
    }
};

// Time Complexity: O(E) * ( O(logE) + O(logE) ) = O(E * logE)