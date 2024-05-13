//! Print elements at nth level of a tree


#include<iostream>
using namespace std;
class Node{
public:
  int val;
  Node* left;
  Node* right;
  Node(int val){ //constructor
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

void preOrderdisplayTree(Node* root){ //Pre Order Traversal
  if(root == NULL) return;
  cout<<root->val<<" ";
  preOrderdisplayTree(root->left);
  preOrderdisplayTree(root->right);
}

void nthOrderPrint(Node* root, int level){
    if(root == NULL) return;
    if(level == 1) cout<<root->val<<" ";
    nthOrderPrint(root->left, level-1);
    nthOrderPrint(root->right, level-1);
}

int main(){
    //9 nodes
  Node* a = new Node(1); //root
  Node* b = new Node(7);
  Node* c = new Node(9);
  Node* d = new Node(2);
  Node* e = new Node(6);
  Node* f = new Node(9);
  Node* g = new Node(5);
  Node* h = new Node(11);
  Node* i = new Node(5);

  a->left = b;
  a->right = c;

  b->left = d;
  b->right = e;

  c->right = f;

  e->left = g;
  e->right = h;

  f->left = i;

    cout<<"Pre Order Traversal : ";
    preOrderdisplayTree(a);

    cout<<endl<<"Print Nodes at 3rd Level : ";
    nthOrderPrint(a, 3);

}