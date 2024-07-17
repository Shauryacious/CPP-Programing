class Solution {
    // Helper function to create the tree recursively
    node* solve(int i, vector<int>& vec) {
        // Agar index array ke size se zyada ho gaya toh NULL return karenge
        if (i >= vec.size()) return NULL;

        // Naya node banayenge current index ke value se
        node* root = newNode(vec[i]);

        // Left child banayenge
        root->left = solve(2 * i + 1, vec);
        // Right child banayenge
        root->right = solve(2 * i + 2, vec);

        return root;
    }

public:
    void create_tree(node* root0, vector<int>& vec) {
        // Root0 ko update karenge new tree se
        root0->data = vec[0];
        root0->left = solve(1, vec);
        root0->right = solve(2, vec);
    }
};


// Input: 
// nodes = [1 2 3 4 5 6 7]
// Output: 
//          1
//        /   \
//      2       3
//    /  \     /  \
//    4  5    6   7
// Explanation: 

