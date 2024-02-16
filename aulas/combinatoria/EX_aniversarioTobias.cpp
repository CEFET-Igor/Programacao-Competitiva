#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;
typedef unsigned long long lint;

lint calcular_permutacoes_replicadas(const unordered_map<string, int>& contagem_cores) {
    lint total_baloes = 0;
    for (const auto& pair : contagem_cores) {
        total_baloes += pair.second;
    }

    lint numerador = 1;
    for (lint i = 1; i <= total_baloes; ++i) {
        numerador *= i;
    }

    lint denominador = 1;
    for (const auto& pair : contagem_cores) {
        lint quantidade = pair.second;
        for (lint i = 1; i <= quantidade; ++i) {
            denominador *= i;
        }
    }

    return numerador / denominador;
}

int main() {

    int n;
    cin >> n;

    unordered_map<string, int> contagem_cores;
    for (int i = 0; i < n; ++i) {
        string cor;
        int quantidade;
        cin >> cor >> quantidade;
        contagem_cores[cor] += quantidade;
    }

    lint total_permutacoes = calcular_permutacoes_replicadas(contagem_cores);
    
    cout << "Feliz aniversario Tobias!" << endl;
    cout << total_permutacoes << endl;

    return 0;
}
