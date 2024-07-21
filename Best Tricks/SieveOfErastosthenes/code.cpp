// Sieve of Eratosthenes

#include<iostream>
#include<vector>
using namespace std;

vector<int> sieve(int n) {
    vector<int> isPrime(n + 1, 1);
    for (int i = 2; i * i <= n; i++) { // we will iterate till sqrt(n)
        if (isPrime[i] == 1) {
            for (int j = i * i; j <= n; j += i) { //in each iteration we will start from i*i and go till n and mark all multiples of i as non prime
                isPrime[j] = 0;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

// Time complexity of sieve: O(n log log n) which is very close to O(n)
// Space complexity of sieve: O(n)



int main() {
    int n = 30;
    vector<int> primes = sieve(n);
    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i] << " ";
    }
    cout << endl;
    return 0;
}