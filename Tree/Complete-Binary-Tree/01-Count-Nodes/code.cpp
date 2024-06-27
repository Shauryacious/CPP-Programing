// Leetcode 222. Count Complete Tree Nodes

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int getLeftHeight(TreeNode* root){
        int height=0;
        while(root){
            root = root->left;
            height++;
        }
        return height;
    }
    int getRightHeight(TreeNode* root){
        int height=0;
        while(root){
            root = root->right;
            height++;
        }
        return height;
    }
public:
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;

        int lh = getLeftHeight(root);
        int rh = getRightHeight(root);
        if(lh == rh){
            return (pow(2, lh) - 1);
        }

        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};