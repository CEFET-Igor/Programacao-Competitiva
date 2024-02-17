#include <iostream>

using namespace std;

// Função para calcular o coeficiente binomial (n choose k)
long long binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    }
}

int main() {
    while (true) {
        int N, K;
        cin >> N >> K;

        // Verifica condição de parada
        if (N == 0 && K == 0) {
            break;
        }

        // Calcula e imprime a quantidade de combinações de equipes diferentes
        long long combinations = binomialCoefficient(N, K);
        cout << combinations << endl;
    }

    return 0;
}