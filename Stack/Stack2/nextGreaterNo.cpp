//The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1. 

// Input: arr[] = [ 4 , 5 , 2 , 25 ]
// Output: 4      ->    5
//         5      ->   25
//         2      ->   25
//         25     ->   -1
// Explanation: except 25 every element has an element greater than them present on the right side


#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
  int arr[] = {3,1,2,7,4,6,2,3};
  int n = sizeof(arr)/sizeof(arr[0]);  
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }


  //APPROACH 01 -> Brute Force
}