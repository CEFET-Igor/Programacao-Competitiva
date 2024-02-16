#include <iostream>
#include <vector>

using namespace std;

int main() {
    int L, C;
    cin >> L >> C;

    vector<vector<int>> matrix(L, vector<int>(C, 0));
    vector<int> linhas;


    int contador = 0;
    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> matrix[i][j];
        }

        for (int j = 0; j < C; ++j) {
            if (matrix[i][j] == 0) {
                contador++;
            }
            else {
                break;
            }
        }
        linhas.push_back(contador);
        contador = 0;
    }

    for (int i = 0; i < linhas.size()-1; i++) {
        if (linhas[i] > linhas[i+1]) {
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;
    return 0;
}
