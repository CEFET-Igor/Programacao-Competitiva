#include <iostream>
#include <vector>
#include <string>

using namespace std;

string decodificarMensagem(int N, int M, const vector<string>& matriz) {
    string mensagem = "";

    // Percorre as diagonais da matriz
    for (int soma = 0; soma < N + M - 1; soma++) {
        // Define os limites da diagonal
        int inicioColuna = max(0, soma - N + 1);
        int fimColuna = min(soma, M - 1);
        
        // Percorre os elementos da diagonal
        for (int j = inicioColuna; j <= fimColuna; j++) {
            int i = soma - j;
            // Concatena o caractere na mensagem decodificada
            mensagem += matriz[i][j];
        }
    }

    return mensagem;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> matriz(N);
    for (int i = 0; i < N; i++) {
        cin >> matriz[i];
    }

    string mensagem = decodificarMensagem(N, M, matriz);
    cout << mensagem << endl;

    return 0;
}