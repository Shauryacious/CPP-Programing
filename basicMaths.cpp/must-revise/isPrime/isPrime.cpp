#include <iostream>
#include <cmath> // Include cmath to use the sqrt function
using namespace std;

// Function to check if a number is prime
bool is_Prime(int n) {
    if (n < 2) return false; // Numbers less than 2 are not prime

    // Loop to check for factors from 2 up to the square root of n
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false; // If n is divisible by i, it is not prime
    }
    return true; // If no factors found, n is prime
}

// T.C = O(sqrt(n))

int main() {
    cout << is_Prime(7); // Test the function with the number 7
    return 0;
}

/*
Pictorial Representation:
Consider checking if 7 is a prime number.
1. n = 7
2. Check divisors from 2 to sqrt(7) (approximately 2.64, so check up to 2).

    7 % 2 != 0 (7 is not divisible by 2)
    No other numbers need to be checked as we only check up to the integer part of sqrt(n).

    Since no divisors were found, 7 is a prime number.
*/
