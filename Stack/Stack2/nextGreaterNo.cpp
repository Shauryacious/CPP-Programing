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
  int arr[] = {3,1,2,7,4,6,2,3}; // ans: 7 2 7 -1 6 -1 3 -1
  int n = sizeof(arr)/sizeof(arr[0]);  
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

  cout<<endl;

    //APPROACH 01 -> Brute Force -> TC: O(n^2)

  // int ans[n];
  // for(int i=0; i<n; i++){
  //   for(int j=i; j<n; j++){
  //     if(arr[j] > arr[i]){
  //       ans[i] = arr[j];
  //       break;
  //     }
  //     else{
  //       ans[i] = -1;
  //     }
  //   }
  // }

  // for(int i=0; i<n; i++){
  //   cout<<ans[i]<<" ";
  // }


  //APPROACH 02 -> Stack -> pop ans push... -> TC: O(n), SC: O(n)
  //Reverse traverse in array from n-2th idx //i.e. second last element till first

  int ans[n];
  stack<int> st;

  ans[n-1] = -1; //as the element can never have a next greater element
  st.push(arr[n-1]); //as the last element itself can be the nge for some other element so we push it into the stack

  for(int i=n-2; i>=0; i--){
    //Step 1: POP -> till you find the nge(next greatest element)
    while(st.size()>0 && st.top() < arr[i]) st.pop();

    //Step 2: ANS
    //if Stack = empty -> ans= -1; else ans is the st.top() as it was the nge
    if(st.size() == 0) ans[i] = -1;
    else ans[i] = st.top();

    //Step 3: PUSH
    //push the arr[i] itself as it can be the nge for someone else
    st.push(arr[i]);
  }
  
  //print
  for(int i=0; i<n; i++){
    cout<<ans[i]<<" ";
  }
}