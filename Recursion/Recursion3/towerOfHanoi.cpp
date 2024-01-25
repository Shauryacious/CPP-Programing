#include<iostream>
using namespace std;
void print_tower_of_hanoi_steps(int n, char a, char b, char c){
  //base case
  if(n==0) return;


  //1) for n discs -> n-1 disc ko helper pe rakho (so for n-1 disc from a, b is destination and c is helper) --> using recursion
  //2) then last nth (sabse badi wali disc ko destination i.e. c pe rakho)
  //3) now n-1 disc ko b se c pe rakho, using a as helper

  //1)
  print_tower_of_hanoi_steps(n-1, a, c, b); //here source ->a, destination-> b, helper ->c
  //2)
  cout<<a<<" -> "<<c;
  cout<<endl;
  //3)
  print_tower_of_hanoi_steps(n-1, b, a, c);
}
int main(){
  int n = 3; //no of discs
  char a = 'A'; //Initial "source" tower 
  char b = 'B'; //Initial "helper" tower
  char c = 'C'; //Initial "Destination" tower
  // print_tower_of_hanoi_steps(n, source, helper, destination);
  print_tower_of_hanoi_steps(n, a, b, c);
} 