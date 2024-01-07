#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr1 = &x; // ptr1 is dabba which stores address of x
    int** ptr2 = &ptr1; // ptr2 is dabba which stores address of ptr1


    //CASE 1: tino mein value of x print ho i.e. 5
    cout<<x<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;

    cout<<endl;

    //CASE 2: tino mein address of x print ho i.e. 0x16b8c32ec
    cout<<&x<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr2<<endl;



}