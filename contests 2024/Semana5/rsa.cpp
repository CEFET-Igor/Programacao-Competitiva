#include <iostream>
#include <cmath>

bool isPrime(unsigned long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (unsigned long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

bool canBeProductOfTwoPrimes(unsigned long long n) {
    for (unsigned long long i = 2; i <= sqrt(n); ++i) {
        if (isPrime(i) && n % i == 0 && isPrime(n / i)) {
            //std::cout << n << " pode ser formado pelos primos: " << i << " e " << n / i << std::endl;
            return true;
        }
    }
    return false;
}

int main() {
    unsigned long long n;
    std::cin >> n;

    if (canBeProductOfTwoPrimes(n)) {
        std::cout << "1";
    } else {
        std::cout << "0";
    }

    return 0;
}
