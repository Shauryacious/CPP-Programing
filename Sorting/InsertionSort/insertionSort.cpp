#include<iostream>
using namespace std;
int main(){
  int n=5;
  int arr[] = {5, 4, 3, 2, 1};

    //PRINT ARRAY
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

  //Insertion sort algorithm -> like bubble sort swaping mechanism
  for(int i=0; i<n-1; i++){
    int j=i+1;
    while(j>=1 && arr[j]<arr[j-1]){
      swap(arr[j], arr[j-1]);
      j--;
    }
  }

    //PRINT ARRAY
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}