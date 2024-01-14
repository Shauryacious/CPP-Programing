//Find the first Occurance of X in the array
#include<iostream>
using namespace std;
int firstOccurance(int arr[], int n, int target){
  int lo=0;
  int hi=n-1;

  while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(arr[mid] == target){
      if(arr[mid-1] == target) hi = mid-1;
      else return mid;
    }



    else if(arr[mid] < target) lo = mid+1;
    else if(arr[mid] > target) hi = mid-1;
  }

  return -1; //if target not found
}

int main (){
  int arr[] = {1,2,2,3,3,3,3,3,4,4,5,6,7};
  int n = sizeof(arr)/sizeof(int);
  int target = 4; //idx of 15 is 5

  cout<<firstOccurance(arr, n, target);
}