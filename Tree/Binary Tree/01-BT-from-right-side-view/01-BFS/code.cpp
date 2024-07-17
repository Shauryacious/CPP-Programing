class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        // Agar root NULL hai toh empty vector return karo
        if(root == NULL) return {};

        vector<int> ans; 
        queue<TreeNode*> q; // Queue BFS ke liye use hoti hai

        q.push(root); // Pehle root node ko queue me daal do

        while(!q.empty()) {
            int n = q.size(); // Queue ki current size le lo (yeh batayega ki current level me kitne nodes hain)

            TreeNode* node = NULL; // node ko null se initialize karte hain

            // Har level ke sabhi nodes ko traverse karte hain
            while(n--) {
                node = q.front(); // Queue ke front node ko le lo
                q.pop(); // Aur queue se remove kar do

                // Agar left child exist karta hai toh queue me daal do
                if(node->left != NULL) {
                    q.push(node->left);
                }
                // Agar right child exist karta hai toh queue me daal do
                if(node->right != NULL) {
                    q.push(node->right);
                }
            }

            // Har level ke //! last node !//
            // ka value answer me add kar do (jo rightmost node hota hai)
            ans.push_back(node->val);
        }

        return ans; // Final answer return kar do
    }
};
