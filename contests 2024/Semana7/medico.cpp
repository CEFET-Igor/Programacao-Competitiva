#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> remuneracoes(N);
    for (int i = 0; i < N; ++i) {
        cin >> remuneracoes[i];
    }

    sort(remuneracoes.begin(), remuneracoes.end(), greater<int>());

    int pacientes_atendidos = 0;
    int berries_ganhos = 0;
    int posicao = 0;

    while(berries_ganhos < K) {

        if (posicao == 0) {
            berries_ganhos += remuneracoes[0];
            posicao = 1;
        }
        else {
            berries_ganhos += remuneracoes[1];
            posicao = 0;
        }
        pacientes_atendidos++;
    }

    cout << pacientes_atendidos << endl;

    return 0;
}