//! Follow up --> Leetcode

#include<iostream>
#include<cmath>
using namespace std;

class TreeNode{
public:
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val){ //constructor
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

int levels(TreeNode* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}


//! LEVEL ORDER TRAVERSAL  --> DFS
void nthOrderPrint(TreeNode* root, int level){
    if(root == NULL) return;
    if(level == 1) cout<<root->val<<" ";
    nthOrderPrint(root->left, level-1);
    nthOrderPrint(root->right, level-1);
}

void levelOrderPrint(TreeNode* root){
    int l = levels(root);
    for(int i=1; i<=l; i++){
        nthOrderPrint(root, i);
        cout<<endl;
    }
}


int main(){
  TreeNode* a = new TreeNode(1); //root
  TreeNode* b = new TreeNode(2);
  TreeNode* c = new TreeNode(3);
  TreeNode* d = new TreeNode(4);
  TreeNode* e = new TreeNode(5);
  TreeNode* f = new TreeNode(6);
  TreeNode* g = new TreeNode(7);

  a->left = b;
  a->right = c;

  b->left = d;
  b->right = e;

  c->left = f;
  c->right = g;

  levelOrderPrint(a);

}

