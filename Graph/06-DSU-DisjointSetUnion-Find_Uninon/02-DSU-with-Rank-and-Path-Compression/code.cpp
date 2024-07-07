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

/*
DO REMEMBER TO INITIALIZE PARENT & rank

int n = 10; //Total number of nodes

PARENT.resize(n);
rank.resize(n, 0);

for(int i=0; i<n; i++){
    PARENT[i] = i; //initially everyone is their own parent
}

*/