#include<iostream>
using namespace std;
int main(){
    //Declaration
    int arr[7]; // 0 1 2 3 4 5 6 ---> 7 dabbe
    //initialization
    arr[0] = 100;
    arr[1] = 200;
    arr[2] = 300;
    arr[3] = 400;
    arr[4] = 500;
    arr[5] = 600;
    arr[6] = 700;

    cout<<arr[3]<<endl;

    //similarly

    int x[4] = {100, 200, 300, 400};
    cout<<x[2]<<endl;

    //output using loops

    for(int i=0; i<=6; i++){
        cout<<arr[i]<<endl;
    }

    //taking input using loops

    int y[5];
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }





}