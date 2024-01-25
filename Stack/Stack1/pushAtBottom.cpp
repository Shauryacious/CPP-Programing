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

void pushAtBottom(stack<int>& st){
  stack<int> temp;
  //while(!st.empty()) //will return bool value true or false
  while(st.size() != 0){
    
  }

}



int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  cout<<st.size()<<endl;
  display(st);
  cout<<endl;

}