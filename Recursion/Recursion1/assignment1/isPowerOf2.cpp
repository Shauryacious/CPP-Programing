//Given a positive integer, return true if it is a power of 2
#include <iostream>
using namespace std;

bool isPowerOfTwo(int x){
  if(x==1) return true;
  isPowerOfTwo(x/2);
  if(isPowerOfTwo(x/2) == true) return true;
  else return false;
}

int main(){
  cout<<"Enter a number : ";
  int x; cin>>x;

  cout<<isPowerOfTwo(x);
}