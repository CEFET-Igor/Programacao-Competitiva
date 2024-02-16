/* 2471 - Quadrado */
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Função para encontrar a posição errada e o valor original
void encontrarErro(vector<vector<int>>& valor, vector<int>& linhas, vector<int>& colunas) {
    int N = valor.size();
    int valor_quase_magico = linhas[0];
    int linha_errada = 0, coluna_errada = 0, diferanca_valores = 0;

    for (int i = 0; i < N - 1; i++) {
        if (linhas[i] == linhas[i + 1]) {
            valor_quase_magico = linhas[i];
            break;
        }
    }

    for (int i = 0; i < N; i++) {
        if (linhas[i] != valor_quase_magico) {
            linha_errada = i;
            diferanca_valores = abs(linhas[i] - valor_quase_magico);
        }
        if (colunas[i] != valor_quase_magico) {
            coluna_errada = i;
            diferanca_valores = abs(colunas[i] - valor_quase_magico);
        }
    }

    int numero_alterado = valor[linha_errada][coluna_errada];
    int numero_original = numero_alterado - diferanca_valores;
    valor[linha_errada][coluna_errada] = numero_original;

    // Verifica se a soma da linha foi corrigida
    int soma_linha = 0;
    for (int i = 0; i < N; i++) {
        soma_linha += valor[linha_errada][i];
    }

    if (soma_linha != valor_quase_magico)
        numero_original = numero_alterado + diferanca_valores;

    cout << numero_original << " " << numero_alterado << endl;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> valor(N, vector<int>(N, 0));
    vector<int> linhas(N, 0);
    vector<int> colunas(N, 0);

    // Entrada dos valores
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> valor[i][j];
            linhas[i] += valor[i][j];
            colunas[j] += valor[i][j];
        }
    }

    // Encontra e corrige o erro
    encontrarErro(valor, linhas, colunas);

    return 0;
}
