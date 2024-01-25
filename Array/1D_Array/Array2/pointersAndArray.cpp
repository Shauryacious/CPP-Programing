#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,7,9};
    int* ptr = arr; //arr == &arr[0] ---> both give address of array

    cout<<ptr<<endl; //address of array
    cout<<ptr[3]<<endl;

    cout<<endl<<endl<<"ANOTHER IMP THING"<<endl<<endl;

    for(int i=0; i<=4; i++){
        cout<<ptr<<" : Adress of dabba"<<endl;
        cout<<*ptr<<" : element of array"<<endl;
        ptr++; //adress update by 4 units
    }

    ptr = arr; // because ptr lost address of array above

    cout<<endl<<endl<<"ANOTHER IMP THING"<<endl<<endl;

    cout<<*ptr<<endl; //ptr is pointing to first element of array
    ptr++; 
    cout<<*ptr<<endl; //ptr is now pointing to 2nd element
    ptr++; 
    cout<<*ptr<<endl; //ptr is now pointing to 3rd element
    ptr--;
    cout<<*ptr<<endl;  //ptr is now pointing to 2nd element
    ptr--; 
    cout<<*ptr<<endl; //ptr is now pointing to 1st element
}