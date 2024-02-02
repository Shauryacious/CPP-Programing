#include<iostream>
using namespace std;

class Node{ //USER DEFINED DATA TYPE
public: 
  int val;
  Node* next;

  Node(int val){
    this->next = NULL;
    this->val = val;
  }
};

class Stack{ //USER DEFINED DATA STRUCTURE
public:
  Node* head;
  int s; //size

  Stack(){ //Constructor
    head = NULL;
    s = 0;
  }

  void push(int val){
      Node* temp = new Node(val);
      temp->next = head;
      head = temp;
      s++;
    }

  void pop(){
    if(head==NULL){
      cout<<"Stack Underflow"<<endl;
      return;
    }
    head=head->next;
    s--;
  }

  int top(){
    if(head==NULL){
      cout<<"Stack Underflow"<<endl;
      return -1;
    }
    return head->val;
  }

  int size(){
    return s;
  }
};

int main(){
  Stack st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  cout<<st.size()<<endl;

  st.pop();
  // st.pop();
  // st.pop();
  // st.pop();
  // st.pop();
  // st.pop();
  cout<<st.size()<<endl;

  cout<<st.top()<<endl;

  st.push(50);
  st.push(60);

}