#include <iostream>
using namespace std;

bool isPowerOf2(int n){
    if(n <= 0){
        return false;
    }
    if((n & (n-1)) == 0){
        return true;
    }
    return false;
}

// Function to find the next power of 2
unsigned int nextPowerOf2(unsigned int n) {
    // If n is already a power of 2
    if (isPowerOf2(n)) {
        return n;
    }

    int p = 1;
    while (p < n) {
        p <<= 1;
    }

    return p;
}

// Explaination
// 1. If n is already a power of 2, return n.
// 2. Otherwise, keep shifting p to the left by 1 bit until p is greater than n.
// 3. 10 = 2
// 4. 100 = 4
// 5. 1000 = 8
// 6. 10000 = 16
// 7. 100000 = 32
// 8. 1000000 = 64

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = nextPowerOf2(n);
    cout << "The next power of 2 is: " << result << endl;

    return 0;
}
