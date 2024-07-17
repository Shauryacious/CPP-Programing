// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

class Solution {
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q){
        // If the root is NULL, so return NULL.
        if(root == NULL){
            return NULL;
        }

        // If the root is equal to node p, then the LCA is root (as root covers both p and itself).
        if(root == p){
            return root;
        }

        // If the root is equal to node q, then the LCA is root (as root covers both q and itself).
        if(root == q){
            return root;
        }

        // Recursively search for LCA in the left subtree.
        TreeNode* leftN = lowestCommonAncestor(root->left, p, q);
        // Recursively search for LCA in the right subtree.
        TreeNode* rightN = lowestCommonAncestor(root->right, p, q);

        // If both left and right recursive calls returned non-NULL values,
        // it means p is located in one subtree and q is located in the other subtree.
        // Thus, root is their lowest common ancestor.
        if(leftN != NULL && rightN != NULL){
            return root;
        }

        // If only one of the recursive calls returned a non-NULL value,
        // it means both p and q are located in that subtree.
        // Return the non-NULL value.
        // refer 06-ex3-IMP-ex.png
        if(leftN != NULL && rightN == NULL){
            return leftN;
        }

        // If leftN is NULL, return rightN which could be either a valid node or NULL.
        else return rightN;
    }
};
