#include<iostream>
#include<cmath>
using namespace std;

//! CLASS NODE
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


//! DFS -> Depth First Search - TRAVERSALS
void preOrderdisplayTree(Node* root){ //Pre Order Traversal
  if(root == NULL) return;
  cout<<root->val<<" ";
  preOrderdisplayTree(root->left);
  preOrderdisplayTree(root->right);
}

void inOrderdisplayTree(Node* root){ //In Order Traversal
  if(root == NULL) return;
  inOrderdisplayTree(root->left);
  cout<<root->val<<" ";
  inOrderdisplayTree(root->right);
}

void postOrderdisplayTree(Node* root){ //Post Order Traversal
  if(root == NULL) return;
  postOrderdisplayTree(root->left);
  postOrderdisplayTree(root->right);
  cout<<root->val<<" ";
}

//! Size = No of Nodes in a Tree
int size(Node* root){
  if(root == NULL) return 0;
  return 1 + size(root->left) + size(root->right);
}


int sum(Node* root){
  if(root == NULL) return 0;
  return root->val + sum(root->left) + sum(root->right);
}

int maxVal(Node* root){
  if(root == NULL) return INT_MIN;
  int leftMax = maxVal(root->left);
  int rightMax  = maxVal(root->right);
  return max( root->val, max( leftMax, rightMax ));
}

int minVal(Node* root){
  if(root == NULL) return INT_MAX;
  int leftMin = minVal(root->left);
  int rightMin  = minVal(root->right);
  return min( root->val, min( leftMin, rightMin ));
}

int levelsOfBinaryTree(Node* root){
  if(root == NULL) return 0;

  return 1 + max(levelsOfBinaryTree(root->left), levelsOfBinaryTree(root->right));
}

int main(){
  Node* a = new Node(1); //root
  Node* b = new Node(2);
  Node* c = new Node(3);
  Node* d = new Node(4);
  Node* e = new Node(50);
  Node* f = new Node(6);
  Node* g = new Node(7);

  a->left = b;
  a->right = c;

  b->left = d;
  b->right = e;

  c->left = f;
  c->right = g;

  cout<<"Pre Order Traversal :    ";
  preOrderdisplayTree(a);
  cout<<endl;
  cout<<"In Order Traversal :     ";
  inOrderdisplayTree(a);
  cout<<endl;
  cout<<"Post Order Traversal :   ";
  postOrderdisplayTree(a);

  cout<<endl<<size(a)<<endl;
  cout<<sum(a)<<endl;
  cout<<maxVal(a)<<endl;
  cout<<minVal(a)<<endl;
  cout<<levelsOfBinaryTree(a)<<endl;
  //height of binary tree = level - 1;


}