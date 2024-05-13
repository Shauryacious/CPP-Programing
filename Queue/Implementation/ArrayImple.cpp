#include<iostream>
#include<vector>
using namespace std;
class Queue{
    int f; //front pointer
    int b; //back pointer
    vector<int> arr;
public:
    Queue(int size){
        f = 0;
        b = 0;
        vector<int> v(size);
        arr = v;
    }
    void push(int val){
        if(b == arr.size()){
            cout<<"Queue is FULL!"<<endl;
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop(){
        if(f-b==0){
            cout<<"Queue Underflow Error"<<endl;
            return;
        }
        f++;
    }
    int front(){
        if(f-b == 0){
            cout<<"Queue is Empty - Underflow Error"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(f-b == 0){
            cout<<"Queue is Empty - Underflow Error"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return f-b;
    }
    bool empty(){
        return f-b==0 ? true : false;
    }
    void display(){
        for(int i=f; i<b; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    // Queue q = new Queue(5);
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);
    q.display();


    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();


    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
}