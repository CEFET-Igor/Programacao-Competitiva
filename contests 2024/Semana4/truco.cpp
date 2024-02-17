#include <bits/stdc++.h>

using namespace std;

// Função para calcular o fatorial de um número
unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        unsigned long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}

unsigned long long comb(int n, int r) {
    if (r > n) {
        return 0;  // r não pode ser maior que n
    }

    // Ajustando r para otimizar o cálculo
    if (r > n / 2) {
        r = n - r;
    }

    unsigned long long resultado = 1;

    for (int i = 0; i < r; ++i) {
        resultado *= (n - i);
        resultado /= (i + 1);
    }

    return resultado;
}

int main() {
    int n;
    cin >> n;

    unsigned long long resultado = comb(n, 2);

    cout << resultado << endl;

    return 0;
}
