#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int target){
  int lo=0;
  int hi=n-1;

  while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] < target) lo = mid+1;
    else if(arr[mid] > target) hi = mid-1;
  }

  return -1; //if target not found
}

int main (){
  int arr[] = {1,2,4,5,9,15,18,21,24};
  int n = sizeof(arr)/sizeof(int);
  int target = 15; //idx of 15 is 5

  cout<<binarySearch(arr, n, target);
}