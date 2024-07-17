class Solution {
    TreeNode* delHelper(TreeNode* root, unordered_set<int>& toDelete, vector<TreeNode*>& forest) {
        // Agar root NULL hai toh wapas NULL bhej do
        if (root == NULL) {
            return NULL;
        }

        // Pehle left subtree pe recursion call karo
        root->left = delHelper(root->left, toDelete, forest);
        // Phir right subtree pe recursion call karo
        root->right = delHelper(root->right, toDelete, forest);

        // Hum post order traversal isliye kar rahe hain kyunki humein bottom-up approach chahiye


        if (toDelete.find(root->val) != toDelete.end()) { 
            //Agar jis node ko delete krna hai wo mil jaye, Toh pehle uske left aur right child ko forest (answer) mein add karlo, 
            // kyunki yeh node delete hone ke baad yeh child nodes individual trees ban jayenge (aur delete ka matlab humein NULL return karna hai)
            // issiliye hum top-down approac (preorder or BFS) nahi laga rahe kyuki kya pata, child node ke andar bhi kuch nodes ho jinhe delete krna ho
            if (root->left != NULL) {
                forest.push_back(root->left);
            }
            if (root->right != NULL) {
                forest.push_back(root->right);
            }

            delete root; // C++ objects ke liye delete ka use karo free ki jagah
            return NULL;
        } else { 
            // Agar current node toDelete set mein nahi hai toh usse delete nahi karna hai, 
            // toh wapis as it is return kar do
            return root;
        }
    }
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> toDelete(to_delete.begin(), to_delete.end()); // to_delete ko unordered_set mein convert kar lo
        vector<TreeNode*> forest; // Yeh forest result store karega

        // Agar root NULL nahi hai aur root ko delete nahi karna toh usse forest mein add kar do
        if (root != NULL && toDelete.find(root->val) == toDelete.end()) {
            forest.push_back(root);
        }

        // delHelper function ko call karo root ke liye
        delHelper(root, toDelete, forest);

        // Forest return kar do
        return forest; 
    }
};
