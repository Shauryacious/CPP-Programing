Here's how we can represent a graph using an adjacency list in C++:

```cpp
adj[0].push_back(1); adj[0].push_back(2);  // Vertex 0 connects to 1 and 2
adj[1].push_back(2); adj[1].push_back(3);  // Vertex 1 connects to 2 and 3
adj[2].push_back(0); adj[2].push_back(3);  // Vertex 2 connects to 0 and 3
adj[3].push_back(1); adj[3].push_back(2);  // Vertex 3 connects to 1 and 2
// Vertex 4 has no connections (empty vector)

```

In this code:

We first create an array of vectors, adj, to represent our graph.

> Each index in the array represents a vertex in the graph.
> We use the push_back function to add an edge between two vertices. For example, adj[0].push_back(1); adds an edge between vertex 0 and vertex 1.
> Vertex 4 has no connections, so its corresponding vector is left empty.
