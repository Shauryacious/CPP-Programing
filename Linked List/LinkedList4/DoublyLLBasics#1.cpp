#include<iostream>
using namespace std;
class Node{
public:
  int val;
  Node* next;
  Node* prev;
  Node(int val){ //Constructor fn
    this->val = val;
    this->prev = NULL;
    this->next = NULL;
  }
};

void display(Node* head){
  while(head){
    cout<<head->val<<" ";
    head = head->next;
  }
}

void displayRev(Node* tail){
    while(tail){
    cout<<tail->val<<" ";
    tail = tail->prev;
  }
}

void displayRecHead(Node* head){
  if(head == NULL) return;
  cout<<head->val<<" ";
  displayRecHead(head->next);
}

void displayRecHeadRev(Node* head){
  if(head == NULL) return;
  displayRecHeadRev(head->next);
  cout<<head->val<<" ";
}

int main(){
  Node* a = new Node(10);
  Node* b = new Node(20);
  Node* c = new Node(30);
  Node* d = new Node(40);
  Node* e = new Node(50);

  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  //e->next == NULL already

  e->prev = d;
  d->prev = c;
  c->prev = b;
  b->prev = a;
  //a->prev == NULL already

  display(a);
  cout<<endl;
  displayRev(e);
  cout<<endl;
  displayRecHead(a);
  cout<<endl;
  displayRecHeadRev(a);
}