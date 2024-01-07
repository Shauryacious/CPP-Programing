#include<iostream>
#include<climits>
using namespace std;

//accessing the elements of array in another function
//updation -----> pass by reference ? yes

void display(int a[], int size){
    for(int i=0; i<=size-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

void update(int b[]){
    b[0] = 100;
    return;
}

int main(){
    int arr[5] = {1, 3, 5, 7 ,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    update(arr);
    display(arr, size);

}

//array ka address bhejte hai, so updation array mein kar sakte hai by functions

