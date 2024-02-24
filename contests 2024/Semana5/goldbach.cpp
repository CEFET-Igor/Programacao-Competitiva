#include <bits/stdc++.h>
using namespace std;

bool isPrime(unsigned long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for(unsigned long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

bool canBeSumOfTwoPrimes(unsigned long long n) {

    if (n % 2 == 0) return true;  // If n is even, it can be the sum of 2 and (n-2)

    for(unsigned long long i = 2; i <= sqrt(n); i += 2) {
        if (isPrime(i) && isPrime(n - i)) {
            return true;
        }
    }
    return false;
}

int main() {
    unsigned long long n;
    cin >> n;

    while (n--) {
        unsigned long long p;
        cin >> p;

        if (canBeSumOfTwoPrimes(p)) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}
