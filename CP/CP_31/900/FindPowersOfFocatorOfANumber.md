# Check Prime Factors of 2 and 3 and Determine Their Powers

This code checks whether a given number \( n \) has only 2 and 3 as its prime factors and determines the powers of these factors.

## Code

```cpp
#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    long long powOf2 = 0;
    // Check for factors of 2 and count their powers
    while (n % 2 == 0) {
        n /= 2;
        powOf2++;
    }

    long long powOf3 = 0;
    // Check for factors of 3 and count their powers
    while (n % 3 == 0) {
        n /= 3;
        powOf3++;
    }

    // If the remaining number is 1, n has only factors 2 and 3
    if (n == 1) {
        cout << "YES" << endl;
        cout << "Power of 2: " << powOf2 << endl;
        cout << "Power of 3: " << powOf3 << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
```
