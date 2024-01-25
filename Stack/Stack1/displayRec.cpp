#include<iostream>
#include<stack>
using namespace std;

void displayRec(stack<int>& st){
  if(st.size() == 0) return;
  int x = st.top();
  st.pop();
  cout<<x<<" ";
  displayRec(st);
  st.push(x);
}

void displayRecRev(stack<int>& st){
  if(st.size() == 0) return;
  int x = st.top();
  st.pop();
  displayRecRev(st);
  cout<<x<<" ";
  st.push(x);
}

int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  cout<<st.size()<<endl;
  displayRec(st);
  cout<<endl;
  displayRecRev(st);

}