#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void dfs(int i, int j, vector<vector<int>> &mapa, vector<vector<bool>> &visitado) {
    // Verifica se as coordenadas estão dentro dos limites do mapa
    if (i-1 < 0 || i+1 >= mapa.size() || j-1 < 0 || j+1 >= mapa[0].size()) {
        return;
    }

    visitado[i][j] = true;

    if (i+1 < mapa[0].size() && mapa[i+1][j] == 1 && !visitado[i+1][j]) {
        dfs(i+1, j, mapa, visitado);
    }
    else if ( i-1 >= 0 && mapa[i-1][j] == 1 && !visitado[i-1][j]) {
        dfs(i-1, j, mapa, visitado);
    }
    else if (j+1 >= mapa[1].size() && mapa[i][j+1] == 1 && !visitado[i][j+1]) {
        dfs(i, j+1, mapa, visitado);
    }
    else if (j-1 >= 0 && mapa[i][j-1] == 1 && !visitado[i][j-1]) {
        dfs(i, j-1, mapa, visitado);
    }
    else {
        cout << "teste" << i << " " << j << endl;
    }

}

int main() {
    int L, C, A, B;
    cin >> L >> C >> A >> B;

    vector<vector<int>> mapa(L, vector<int>(C));
    vector<vector<bool>> visitado(L, vector<bool>(C));
    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> mapa[i][j];
            visitado[i][j] = false;
        }
    }

    dfs(A-1, B-1, mapa, visitado);

}