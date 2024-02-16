#include <iostream>
#include <cmath>

using namespace std;

// Função para verificar se um número é primo
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    
    return true;
}

// Função para verificar se todos os dígitos de um número são primos
bool allDigitsPrime(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (!isPrime(digit)) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    
    while (cin >> n) {
        if (isPrime(n) && allDigitsPrime(n)) {
            cout << "Super" << endl;
        } else if (isPrime(n)) {
            cout << "Primo" << endl;
        } else {
            cout << "Nada" << endl;
        }
    }
    
    return 0;
}
