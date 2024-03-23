#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maiorSubsequenciaCrescente(const vector<int>& numeros) {
    int n = numeros.size();
    vector<int> dp(n, 1); // Inicializa o vetor de memoização com 1s, pois cada número é uma subsequência crescente de tamanho 1
    
    // Para cada número, verifique se é possível estender a subsequência crescente anterior
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (numeros[i] > numeros[j]) {
                dp[i] = max(dp[i], dp[j] + 1); // Atualiza o tamanho da maior subsequência crescente que termina em i
            }
        }
    }

    // Encontra o tamanho da maior subsequência crescente
    int maiorTamanho = *max_element(dp.begin(), dp.end());

    return maiorTamanho;
}

int main() {
    int numero;
    vector<int> numeros;

    // Lê os números da entrada
    while (cin >> numero) {
        numeros.push_back(numero);
    }

    int tamanhoMaiorSubsequencia = maiorSubsequenciaCrescente(numeros);
    cout << tamanhoMaiorSubsequencia << endl;

    return 0;
}