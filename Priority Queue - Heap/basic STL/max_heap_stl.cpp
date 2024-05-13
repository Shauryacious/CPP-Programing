#include<iostream>
#include<queue>

using namespace std;

int main(){
    //! Max Heap
    priority_queue<int> pq;
    //time complexity of push is O(logn)
    pq.push(1); //1
    pq.push(3); //3 1
    pq.push(2); //3 2 1
    pq.push(5); //5 3 2 1
    pq.push(4); //5 4 2 1 3
    pq.push(8); //8 5 4 2 1 3

    //time complexity of size is O(1)
    //! size
    cout<<"SIZE : "<<pq.size()<<endl; //6

    //time complexity of top is O(1)
    //! top
    cout<<"TOP : "<<pq.top()<<endl; //8

    //time complexity of pop is O(logn)
    //! pop
    pq.pop();
    cout<<"new TOP : "<<pq.top()<<endl; //8

    //time complexity of empty is O(1)
    //! empty
    cout<<"EMPTY : "<<pq.empty()<<endl; //0

    //time complexity of print is O(nlogn)
    //! print
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    //Searching in heap is O(n)
    int target = 3;
    bool found = false;
    while(!pq.empty()){
        if(pq.top() == target){
            found = true;
            break;
        }
        pq.pop();
    }
    cout<<endl<<found;
    return 0;
}