#include<iostream>
using namespace std;
void display(int arr[], int n){
  if(n==0) {
    cout<<arr[0]<<" ";
    return; 
    }
  display(arr, n-1);
  cout<<arr[n]<<" ";
}
int main(){
  int arr[] = {1,2,3,4,5};
  int n = sizeof(arr)/sizeof(int); //To get size of arr
  //#NOTE: sizeof() operator returns the size of array in bytes, so it will be 20 / 4 = 5
  cout<<"Number of elements in array are : "<<n<<endl;
  display(arr, n);
}