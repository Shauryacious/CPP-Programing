#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is a power of 2
bool isPowerOf2(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

// Function to run test cases
void runTestCases() {
    vector<int> testCases = {1, 2, 3, 4, 16, 17, 32, 64, 100, 128};

    for (int num : testCases) {
        cout << "Is "<<num<< " a power of 2? "<<(isPowerOf2(num) ? "Yes" : "No")<<endl;
    }
}

int main() {
    runTestCases();
    return 0;
}

// Explaination:
// A power of 2 in binary has exactly one bit set to 1 (e.g., 16 in binary is 10000).
// Subtracting 1 from a power of 2 flips all the bits after the rightmost 1 bit (e.g., 16 - 1 is 15, which in binary is 01111).
// Performing a bitwise AND operation between n and n - 1 results in 0 if n is a power of 2 (because there are no common set bits).

// Pictorial representation:
// 16 = 10000
// 15 = 01111
//  &  -------
//      00000

// 16 & 15 = 00000



// T.C = O(1) (constant time complexity)
