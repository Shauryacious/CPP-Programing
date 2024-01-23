#include<iostream>
using namespace std;
class Node{
public:
  int val;
  Node* next;
  Node(int val){ //constructor fn
    this->val = val;
    this->next = NULL;
  }
};


//DISPLAY LL NORMAL ITERATIVE SOLUTION -> Better soln
void display(Node* head){
  Node* temp = head;
  while(1){
    cout<<temp->val<<" ";
    if(temp->next == NULL) break;
    temp = temp->next;
  }
}

//DISPLAY LL RECURSIVE SOLUTION -> Bad soln because every time new dabba is created 
void displayRec(Node* head){
  cout<<head->val<<" ";
  if(head->next == NULL) return;
  displayRec(head->next);
}

//
int sizeOfLL(Node* head){
  int n = 0;
  while(head != NULL){
    n++;
    head = head->next;
  }
  return n;
}
int main(){
  Node* a = new Node(10);
  Node* b = new Node(20);
  Node* c = new Node(30);
  Node* d = new Node(40);

  a->next = b;
  b->next = c;
  c->next = d;


  // cout<<a->next<<endl;
  // cout<<b;


  Node* head = a;
  //display(head);

  displayRec(head);
  cout<<endl;
  //cout<<sizeOfLL(head); //yaha a pointer(head) pass by value hua hai -> so recursive solution will be bad because time complexity will remain same but space complexity will increase
}