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

int main() {
    cout << "Enter a number: ";
    int n; 
    cin >> n;
    int count = 0;
    
    while (n != 0) {
        // Calculate the rightmost set bit mask (RSBM)
        int rsbm = n & -n;
        
        // Subtract RSBM from n
        n = n - rsbm;
        
        // Increment the count of set bits
        count++;
    }
    
    cout << "Number of set bits: " << count;
    return 0;
}

// Dry Run
// n = 58 (Binary: 00111010)

// Iteration 1
// n:    00111010
// -n:   11000110
// rsbm: 00000010  <--- Rightmost set bit mask n & -n
// n - rsbm = 00111000
// count: 1


// Iteration 2
// n:    00111000
// -n:   11001000
// rsbm: 00001000  <--- Rightmost set bit mask n & -n
// n - rsbm = 00110000
// count: 2


// Iteration 3
// n:    00110000
// -n:   11010000
// rsbm: 00010000  <--- Rightmost set bit mask n & -n
// n - rsbm = 00100000
// count: 3


// Iteration 4
// n:    00100000
// -n:   11100000
// rsbm: 00100000  <--- Rightmost set bit mask n & -n
// n - rsbm = 00000000
// count: 4