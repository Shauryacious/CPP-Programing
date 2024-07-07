class Solution{
vector<int> PARENT;
vector<int> rank;

int find(int x){ //find the parent of x
    if(PARENT[x] == x) return x;
    return PARENT[x] = find(PARENT[x]);
}

void Union(int x, int y){
    int parent_x = find(x);
    int parent_y = find(y);

    if(parent_x == parent_y) return; //already in the same set
    else{ // not in the same set, hence union them
        if(rank[parent_x] > rank[parent_y]){ //Jiski rank jada hai wo papa banega
            PARENT[parent_y] = parent_x; //toh x papa banega y ka
        }
        else if(rank[parent_y] > rank[parent_x]){
            PARENT[parent_x] = parent_y; //toh y papa banega x ka
        }
        else{ //rank of both are same
            PARENT[parent_x] = parent_y; //toh y papa banega x ka
            rank[parent_y]++; //because y is a parent now so, rank of y is increased by 1
        }
    }
}
public:
    //Function to detect cycle using DSU in an undirected graph.
	int detectCycle(int V, vector<int>adj[]){
	    PARENT.resize(V);
	    rank.resize(V, 0);
	    
	    for(int i=0; i<V; i++){
	        PARENT[i] = i;
	    }
	    
	    for(int u=0; u<V; u++){
	        for(auto v : adj[u]){
	            if(u < v){ //! agar bidirectional graph adj diya ho aur sirf ek baar check krna ho, i.e. sirf u se v jana ho ya sirf v se u jana ho tab ye condition lagake kiya ja sakta hai
	                int parent_u = find(u);
	                int parent_v = find(v);
	                if(parent_u == parent_v) return 1;
	                Union(parent_u, parent_v);
	            }
	        }
	    }
	    return 0;
	}
};