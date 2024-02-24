#include <iostream>

using namespace std;

int lowestPrimeFactor(int n) {
    for (int i {2}; i * i <= n; ++i)
        if (not (n % i))
            return i;
    return n;
}

bool isPrime(int n) {
    return n > 1 and lowestPrimeFactor(n) == n;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int L, R;
    cin >> L >> R;
    for(int i = L; i <= R; i++)
        if(isPrime(i) and isPrime(sumOfDigits(i)))
            cout << i << endl;
}

