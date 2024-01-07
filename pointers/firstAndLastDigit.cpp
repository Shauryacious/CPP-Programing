#include<iostream>
using namespace std;

void fn(int n, int* address_firstDigit, int* address_lastDigit){
    *address_lastDigit = n%10; //last digit
    while(n>9){
        n = n/10;
    }
    *address_firstDigit = n; //saving final value of n in firstDigit dabba 
    return;
}

int main(){
    cout<<"Enter a number : ";
    int n; cin>>n;

    int firstDigit, lastDigit;
    int* address_firstDigit = &firstDigit;
    int* address_lastDigit = &lastDigit;

    fn(n, address_firstDigit, address_lastDigit);

    cout<<firstDigit<<" "<<lastDigit;
}