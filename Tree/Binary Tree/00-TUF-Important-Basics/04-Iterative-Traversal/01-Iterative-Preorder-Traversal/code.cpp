// class Solution {
//     void preorder(TreeNode* root, vector<int>& v){
//         if(root == NULL) return;

//         v.push_back(root->val);
//         preorder(root->left, v);
//         preorder(root->right, v);
//     }
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> v;
//         preorder(root, v);
//         return v;
//     }
// };

// APPROACH 2 -> Iterative DFS
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL){
            return ans;
        }
        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();

            ans.push_back(node->val);
 
            // For PreOrder (root Left Right) -> ulta karenge, pehle right wala dalenge stack mein fir left wala dalenge, b/c stack if LIFO last in first out
            if(node->right != NULL){
                st.push(node->right);
            }
            if(node->left != NULL){
                st.push(node->left);
            }
        }

        return ans;
    }
};