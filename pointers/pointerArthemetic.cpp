#include<iostream>
using namespace std;
int main(){
    int x=4, y=5;
    int* px = &x; //0x16f6d72dc
    int* py = &y; //0x16dbef2d8
    cout<<px<<endl<<py;
    

}