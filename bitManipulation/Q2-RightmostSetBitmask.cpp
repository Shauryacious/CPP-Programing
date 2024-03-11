// Position of rightmost set bit

// Write a one-line function to return the position of the first 1 from right to left, in the binary representation of an Integer. 

// Example:
// Input: n = 18
// Output: 2
// Explanation: Binary Representation of 18 is 010010, hence position of first set bit from right is 2.

// Input:  n = 19
// Output: 1
// Explanation: Binary Representation of 19 is 010011, hence position of first set bit from right is 1.


// Constraints
// 1 <= n <= 10^9
// Sample Input
// 58
// Sample Output
// 00000000000000000000000000000010




//SOLUTION
//TO FIND RSBM = Rightmost Set Bitmask -> x ka uske 2's compliment ke sath & lelo
// x ka 1's compliment = x' = ~x
// x ka 2's compliment = x" = ~x + 1 ---> which is also equal to x" = -x

// Lets say we have a number: x
// x =                A 0s and 1s then a 1 then B 0s
// x' = ~x =          A 1s and 0s then a 0 then B 1s
// x" = ~x + 1 =      A 1s and 0s then a 1 then B 0s
                  // ---------------------------------
// x & x" =           A 0s and 0s then a 1 then B 0s   <----- this is the RSB we wanted



#include<iostream>
using namespace std;
int main(){
  cout<<"Enter a number: ";
  int n; cin>>n;

  int rsbm = n & -n;
  cout<<bitset<32>(rsbm);
}

