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

class DLL{
public:
  Node* head;
  Node* tail;
  int size;
  DLL(){ //constructor
    head = NULL;
    tail = NULL;
    size = 0;
  }

  void insertAtTail(int val){
    Node* temp = new Node(val);
    if(size == 0) head = tail = temp;
    else {
      tail->next = temp; //connect tail to temp
      temp->prev = tail; //connect temp to tail
      tail = temp; //make last node tail
    }
    size++;
  }

  void insertAtHead(int val){
    Node* temp = new Node(val);
    if(size == 0) head = tail = temp;
    else {
      temp->next = head; //connect temp to head
      head->prev = temp; //connect head to temp
      head = temp; //make first node as head
    }
    size++;
  }

  void insertAtIndex(int val, int idx){
    if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
    else if(idx == 0) insertAtHead(val);
    else if(idx == size) insertAtTail(val);
    else{
      Node* temp = new Node(val);
      Node* itrtr = head;
      for(int i=0; i<idx; i++){
        itrtr = itrtr->next;
      }
      size++;
    }
  }



};

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
}