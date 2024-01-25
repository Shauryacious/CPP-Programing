#include<iostream>
using namespace std;
int main(){
    int arr[4] = {1, 2, 3, 4};
    cout<<&arr[0]<<endl; //0x16bc2b2e0
    cout<<&arr[1]<<endl; //0x16bc2b2e4
    cout<<&arr[2]<<endl; //0x16bc2b2e8
    cout<<&arr[3]<<endl; //0x16bc2b2ec

    //HEXADECIMAL SYSTEM 0 1 2 3 4 5 6 7 8 9 a b c d e f -----> 16 elements

    //ADRESS OF ARRAY = address of first index of array
    // &arr == &arr[0]

}