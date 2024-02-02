#include<iostream>
using namespace std;

class Stack{
public:
  int arr[5];
  int idx;
  int s; //size

  Stack(){ //Constructor
    idx = -1;
    s = 0;
  }

  void push(int val){
    if(s==5 || idx==4) {
      cout<<"Stack Overflow"<<endl;
      return;
    }
    idx++;
    arr[idx] = val;
    s++;
  }

  void pop(){
    idx--;
    s--;
  }

  int top(){
    return arr[idx];
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
  cout<<st.size()<<endl;

  cout<<st.top()<<endl;

  st.push(50);
  st.push(60);

}