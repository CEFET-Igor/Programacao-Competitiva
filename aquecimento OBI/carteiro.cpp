#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> numero_casa(N, 0);
    vector<int> numero_casa_com_encomenda(M, 0);

    for (int i = 0; i < N; ++i) {
        cin >> numero_casa[i];
    }

    for (int i = 0; i < M; ++i) {
        cin >> numero_casa_com_encomenda[i];
    }

    int tempo = 0;
    int posicaoAtual = numero_casa[0];

    for (int i = 0; i < M; ++i) {
        int distancia = std::abs(numero_casa_com_encomenda[i] - posicaoAtual); 
        tempo += distancia;
        posicaoAtual = numero_casa_com_encomenda[i]; 
    }

    std::cout << tempo << std::endl;

}
