#include<iostream>
using namespace std;
int main(){
  cout<<"Enter the no : ";
  float n; cin>>n;
  int x = int(n);
  float y = n - x;
  float z = y * 60;
  int count = 0;
  while(z<=0 && z>= 0.5){
    z = z - 0.5;
    count++;
  }
}