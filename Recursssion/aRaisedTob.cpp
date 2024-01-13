//Code for a raised to the power b
#include<iostream>
using namespace std;

int powerRec(int a, int b){
  if(b == 0) return 1;
  return a*powerRec(a, b-1);
}

int powerLoop(int a, int b){
  int p =1;
  for(int i=0; i<b; i++){
    p*=a;
  }

  return p;
}

int main(){
  cout<<"Enter the base a : ";
  int a; cin>>a;
  cout<<"Enter the power b : ";
  int b; cin>>b;

  //cout<<powerRec(a, b);
  cout<<powerLoop(a,b);

}