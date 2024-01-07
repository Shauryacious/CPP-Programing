#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;

    
    // if (x%2==0){
    //    cout<<"The number you entered is even";
    // }
    // else cout<<"The number you entered is odd";

    // Ternary operator syntax
    // (condition) ? true : false

    (x%2==0)? cout<<"The number you entered is even" : cout<<"The number you entered is odd";

    
    
return 0;
}

//ternary operator and assignment operator mein right to left chalte hai