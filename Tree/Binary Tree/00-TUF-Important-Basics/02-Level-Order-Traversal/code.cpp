class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL){
            return {};
        }

        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<int> levelWiseAns;
            while(n--){
                TreeNode* node = q.front();
                q.pop();

                levelWiseAns.push_back(node->val);

                if(node->left != NULL){
                    q.push(node->left);
                }
                if(node->right != NULL){
                    q.push(node->right);
                }
            }
            ans.push_back(levelWiseAns);
        }

        return ans;
    }
};

Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []



// APPROACH 2 -> With DFS, IMP to undurstand
// class Solution {
//     int levels(TreeNode* root){
//         if(root == NULL) return 0;
//         return 1 + max(levels(root->left), levels(root->right));
//     }

//     void nthOrderTraversal(TreeNode* root, int level, vector<int>& v){
//         if(root == NULL) return;
//         if(level == 1){
//             v.push_back(root->val);
//             return;
//         }
//         nthOrderTraversal(root->left, level-1, v);
//         nthOrderTraversal(root->right, level-1, v);
//     }
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         int n = levels(root);

//         for(int i=1; i<=n; i++){
//             vector<int> v;
//             nthOrderTraversal(root, i, v);
//             ans.push_back(v);
//         }

//         return ans;
//     }
// };