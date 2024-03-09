#include <bits/stdc++.h>
using namespace std;

void colorirCamiseta(vector<int>& camiseta, int N) {
    vector<int> esquerda(N, 10000);
    vector<int> direita(N, 10000);

    int distancia = N;

    // Passagem da esquerda para a direita
    for (int i = 0; i < N; ++i) {
        if (camiseta[i] == 0) {
            distancia = 0;
        } else {
            distancia++;
        }
        esquerda[i] = distancia;
    }

    // Passagem da direita para a esquerda
    distancia = N;
    for(int i = N - 1; i >= 0; --i) {
        if (camiseta[i] == 0) {
            distancia = 0;
        } else {
            distancia++;
        }
        direita[i] = min(direita[i], distancia);
    }

    // Colorir as faixas
    for (int i = 0; i < N; ++i) {
        int distancia_minima = min(esquerda[i], direita[i]);
        cout << distancia_minima << " ";
    }

    cout << endl;
}

int main() {
    int N;
    cin >> N;

    vector<int> camiseta(N);

    for (int i = 0; i < N; ++i) {
        cin >> camiseta[i];
    }

    colorirCamiseta(camiseta, N);

    return 0;
}
