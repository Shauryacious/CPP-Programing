class Solution {
    bool check(TreeNode* L, TreeNode* R){
        if(L==NULL && R==NULL) return true; //both equal and null
        
        //If only one of the subtree is empty, they are not mirror images
        if(L==NULL && R!=NULL) return false; 
        if(L!=NULL && R==NULL) return false; 

        if(L->val == R->val){ //then check ki, left ka left child should be equal to right ka right child and also check that left ka right child should be equal to right ka left child
            if(check(L->left, R->right) && check(L->right, R->left)){
                return true;
            }
        }
        return false;
    }
public:
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }
};