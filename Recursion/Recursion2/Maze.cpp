//You want to reach the destination, only valid choices are down or right 
#include<iostream>
using namespace std;
int noOfWays(int n){
  if(n == 2) return 2;
  if(n == 1) return 1;

  return noOfWays(n-1) + noOfWays(n-2);
}


int main(){
  // cout<<"Enter Starting Row : ";
  // int sr; cin>>sr;
  // cout<<"Enter Starting Col : ";
  // int sc; cin>>sc;
  // cout<<"Enter Ending Row : ";
  // int er; cin>>er;
  // cout<<"Enter Ending Col : ";
  // int ec; cin>>ec;

  // sr = 1
} 