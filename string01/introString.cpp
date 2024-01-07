#include<iostream>
using namespace std;
int main(){
    char str[5] = {'a','b','c','d','e'}; 
    // actually it contains 6 chars, last one is /0

    //PRINT M1
    for(int i=0; i<5; i++){
        cout<<str[i]<<" ";
    }

    cout<<endl<<endl;

    //PRINT M2 
    for(int i=0; str[i] != '\0'; i++){ //condition--> str[i] != '/0'
        cout<<str[i]<<" ";
    }

    // '\0' is used as break in string
}