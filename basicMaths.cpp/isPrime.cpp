#include<iostream>
using namespace std;
bool is_Prime(int n){
  if(n < 2) return false;

  for(int i=2; i <= sqrt(n); i++){
    if(n%i == 0) return false;
  }
  return true;
}

int main(){
  cout<<is_Prime(7);
}