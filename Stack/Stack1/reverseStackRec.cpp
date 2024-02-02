#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> temp){ //not pass by reference but pass by value i.e. new Stack temp is created
  while(temp.size() != 0){ 
    int x = temp.top();
    cout<<x<<" ";
    temp.pop();
  }
}

void pushAtBottom(stack<int>& st, int val){
  stack<int> temp;
  while(st.size() != 0){
    int x = st.top();
    temp.push(x);
    st.pop();
  }

  st.push(val);

  while(temp.size() != 0){
    int x = temp.top();
    st.push(x);
    temp.pop();
  }
}

void revStackRec(stack<int>& st){
  //Base Case
  if(st.size() == 1) return;

  //recursion
  int x = st.top();
  st.pop();
  revStackRec(st);

  //push at bottom
  pushAtBottom(st, x);
}

int main(){
  stack<int> st;
  st.push(10); //Bottom most element
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50); //Top most element
  
  display(st);
  cout<<endl;

  revStackRec(st);

  display(st);
  cout<<endl;

}