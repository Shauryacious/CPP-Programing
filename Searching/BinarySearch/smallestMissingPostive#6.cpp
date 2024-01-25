#include<iostream>
using namespace std;
int smallestMissing(int arr[], int n){
  int lo=0;
  int hi=n-1;

  int ans = -1;
  while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(arr[mid] == mid) lo = mid + 1;
    else if(arr[mid] != mid){
      ans = mid;
      hi = mid-1;
    }
  }
  
  return ans; //-1 if missing no not found
}

int main (){
  //IMP OBSERVATION : idx and value are same untill the first missing element
  //           0 1 2 3 4 5 6 7 8  9
  int arr[] = {0,1,2,3,4,5,6,7,9,11,14}; //Smallest missing is 4
  int n = sizeof(arr)/sizeof(int);

  // //O(n) -> loop
  // for(int i=0; i<n; i++){
  //   if(arr[i] != i) {
  //     cout<<i;
  //     break;
  //   };
  // }


  cout<<smallestMissing(arr, n);
}