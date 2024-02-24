#include <bits/stdc++.h>
using namespace std;


unsigned long long lowestPrimeFactor(unsigned long long n, unsigned long long startPrime = 2) {
    if (startPrime <= 3) {
        if (!(n & 1))
            return 2;
        if (!(n % 3))
            return 3;
        startPrime = 5;
    }

    for (unsigned long long i {startPrime}; i * i <= n; i += (i + 1) % 6 ? 4 : 2)
        if (!(n % i))
            return i;
    return n;
}

bool isPrime(unsigned long long n) {
    return n > 1 and lowestPrimeFactor(n) == n;
}

int main(){

    unsigned long long n; cin >> n;
    while(n){

        unsigned long long p; cin >> p;
        if(isPrime(p)){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }

        n--;
    }









    return 0;
}