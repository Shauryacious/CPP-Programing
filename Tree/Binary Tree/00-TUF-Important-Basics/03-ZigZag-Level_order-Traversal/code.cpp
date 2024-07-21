class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);
        bool isLeftToRight = true;

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
            if(isLeftToRight == false){
                reverse(levelWiseAns.begin(), levelWiseAns.end());
            }
            ans.push_back(levelWiseAns);
            isLeftToRight = !isLeftToRight;
        }

        return ans;
    }
};

// APPROACH 2 -> DFS -> IMP to understand
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
//         nthOrderTraversal(root->left, level-1, v);  //! Left
//         nthOrderTraversal(root->right, level-1, v); //! Right
//     }

//         void nthOrderTraversalReverse(TreeNode* root, int level, vector<int>& v){
//         if(root == NULL) return;
//         if(level == 1){
//             v.push_back(root->val);
//             return;
//         }
//         nthOrderTraversalReverse(root->right, level-1, v); // Right
//         nthOrderTraversalReverse(root->left, level-1, v);  // Left
//     }
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         int n = levels(root);

//         for(int i=1; i<=n; i++){
//             vector<int> v;
//             if((i & 1) == 1){ //odd
//                 nthOrderTraversal(root, i, v);
//             }
//             else{
//                 nthOrderTraversalReverse(root, i, v);
//             }
//             ans.push_back(v);
//         }

//         return ans;
//     }
// };