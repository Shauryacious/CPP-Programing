#include<iostream>
#include<queue>

using namespace std;

int main(){
    //! min Heap
    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(1); //1
    pq.push(3); //3 1
    pq.push(2); //3 2 1
    pq.push(5); //5 3 2 1
    pq.push(4); //5 4 2 1 3
    pq.push(8); //8 5 4 2 1 3

    //! size
    cout<<"SIZE : "<<pq.size()<<endl; //6

    //! top
    cout<<"TOP : "<<pq.top()<<endl; //8

    //! pop
    pq.pop();
    cout<<"new TOP : "<<pq.top()<<endl; //8

    //! empty
    cout<<"EMPTY : "<<pq.empty()<<endl; //0

    //! print
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}