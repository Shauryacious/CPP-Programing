//Find lower bound of target, give target may or may not present
#include<iostream>
using namespace std;
int lowerBound(int arr[], int n, int target){
  int lo=0;
  int hi=n-1;

  bool flag = false; //flase for element/target not found
  while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(arr[mid] == target) {
      flag = true;
      return arr[mid-1];
    }
    else if(arr[mid] < target) lo = mid+1;
    else if(arr[mid] > target) hi = mid-1;
  }
  if(flag == false){ //if target not found
    return arr[hi];
  }
  return 0;
}

int main (){
  int arr[] = {1,2,4,5,9,15,18,21,24};
  int n = sizeof(arr)/sizeof(int);
  int target = 12; //When binary Search is over (i.e. element was not found) then always and always, the hi is on the lower bound while the lo is on the upper bound aka breaking state of the while loop

  //While, if the element is found then mid-1 is the lower bound and mid+1 is the upper bound

  cout<<lowerBound(arr, n, target);
}