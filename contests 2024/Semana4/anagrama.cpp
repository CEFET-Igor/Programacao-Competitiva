#include <bits/stdc++.h>

using namespace std;

using CountMap = unordered_map<char, int>;

// Função para calcular o fatorial de um número
unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

// Função para calcular o número de anagramas
unsigned long long calcularAnagramas(const string& frase) {

    CountMap contagem;


    if (frase.empty()) {
        return 0; // Tratar caso em que a frase está vazia
    }

    int vog = 0, cons = 0;

    for (auto &c : frase) {
        if(c != ' '){
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vog++;
        } else {
            cons++;
        }

        contagem[c]++;
        }
    }

    unsigned long long ans = 1;
    unsigned long long div = 1;

    for (int i = 0; i < frase.length(); i++) {
        if (vog == 0) {
            ans *= fatorial(cons);
            break;
        } else if (cons == 0) {
            ans *= fatorial(vog);
            break;
        } else {
            if (i % 2 == 0) {
                ans *= cons;
                cons--;
            } else {
                ans *= vog;
                vog--;
            }
        }
    }

    for (const auto& pair : contagem) {
        div *= fatorial(pair.second);
    }

    return (ans/div);
}

int main() {
    string frase;
    getline(cin, frase);

    unsigned long long anagramas = calcularAnagramas(frase);

    cout << anagramas;

    return 0;
}
