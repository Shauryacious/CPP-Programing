#include<iostream>
using namespace std;
int main(){
    int a,b;
    char symbol;

    cout<<"Enetr your problem : ";
    cin>>a>>symbol>>b;

    switch(symbol){
        case '+' : 
        cout<<a+b;
        break;

        case '-' : 
        cout<<a-b;
        break;

        case '*' : 
        cout<<a*b;
        break;

        case '/' : 
        cout<<a/b;
        break;


    }






    return 0;
}