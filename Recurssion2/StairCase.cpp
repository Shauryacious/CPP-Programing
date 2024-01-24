//At ith stair you can either climb up 1 stair or 2 stair -> COUT no of ways to reach nth stair
#include<iostream>
using namespace std;
int noOfWays(int n){
  if(n == 2) return 2;
  if(n == 1) return 1;

  return noOfWays(n-1) + noOfWays(n-2);
}


int main(){
  cout<<"Enter Numer of Stairs : ";
  int n; cin>>n;

  cout<<"No of Diff ways are : "<<noOfWays(n);
} 