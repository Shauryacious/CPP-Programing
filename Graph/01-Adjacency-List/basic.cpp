#include <iostream>
#include <vector>

using namespace std;

    // adj[0] = {1, 2};  // Vertex 0 connects to 1 and 2
    // adj[1] = {2, 3};  // Vertex 1 connects to 2 and 3
    // adj[2] = {0, 3};  // Vertex 2 connects to 0 and 3
    // adj[3] = {1, 2};  // Vertex 3 connects to 1 and 2
    // adj[4] = {};     // Vertex 4 has no connections (empty vector)

int main() {
    //! array of vectors = adj
    vector<int> adj[5];

    adj[0].push_back(1); adj[0].push_back(2);  // Vertex 0 connects to 1 and 2
    adj[1].push_back(2); adj[1].push_back(3);  // Vertex 1 connects to 2 and 3
    adj[2].push_back(0); adj[2].push_back(3);  // Vertex 2 connects to 0 and 3
    adj[3].push_back(1); adj[3].push_back(2);  // Vertex 3 connects to 1 and 2
    // Vertex 4 has no connections (empty vector)

    // Print out the connections for each vertex
    for (int i = 0; i < 5; i++) {
        cout << "Vertex " << i << " is connected to: ";
        for (int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}