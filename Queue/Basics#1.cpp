#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    while(q.size()>0){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
    }
}

void reverse(queue<int>& q){
    stack<int> st;
    // queue ke elements stack mein ulto
    while(q.size()>0){
        int x = q.front();
        q.pop();
        st.push(x);
    }

    // stack ke elements wapis queue mein ulto
    while(st.size()>0){
        int x = st.top();
        st.pop();
        q.push(x);
    }
}


int main(){
    queue<int> q;
    //BASIC FUNCTIONS
    // push, pop, front, back, size, empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // display(q);
    // display(q);
    display(q);
    reverse(q);
    // // cout<<q.front();
    display(q);
    // display(q);

    // display(q);
}