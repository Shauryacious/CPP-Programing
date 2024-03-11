// Kernighans Algorithm - Count set bits in an integer
// Write an efficient program to count the number of 1s in the binary representation of an integer.

// Examples : 
// Input : n = 6
// Output : 2
// Binary representation of 6 is 110 and has 2 set bits

// Input : n = 13
// Output : 3
// Binary representation of 13 is 1101 and has 3 set bits

// Constraints
// 1 <= n <= 10^9
// Sample Input
// 58    ----> 00000000000000000000000000111010
// Sample Output
// 4    ----> 4 1s are +nt

// Kernighans Algorithm -> uses rsbm to jump from 1 to another 1 to another 1 without traversing to each element

#include<iostream>
using namespace std;
int main(){
  cout<<"Enter a number: ";
  int n; cin>>n;
  int count = 0;
  while(n != 0){
    int rsbm = n & -n;
    n = n - rsbm;
    count++;
  }

  cout<<count;
}
