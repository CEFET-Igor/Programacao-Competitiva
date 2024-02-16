#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int resultado;
vector<vector<int>> numero;
vector<vector<bool>> bandeira;

int dy[] = {0, 1, 0, -1};
int dx[] = {1, 0, -1, 0};

void dfs(int x, int y, int n) {
  resultado++;
  bandeira[x][y] = true;

  for (int i = 0; i < 4; i++) {
    int x2 = x + dx[i], y2 = y + dy[i];
    if (0 <= min(x2, y2) && max(x2, y2) < n && !bandeira[x2][y2] && numero[x2][y2] >= numero[x][y])
      dfs(x2, y2, n);
  }
}

int main() {
    int N;
    cin >> N;
    
    int Xi, Yi;
    cin >> Xi >> Yi;
    Xi--, Yi--;

    numero = vector< vector<int> >(N, vector<int>(N, 0));
    
    for (int y = 0; y < N; y++)
        for (int x = 0; x < N; x++)
          cin >> numero[y][x];

    bandeira = vector< vector<bool> >(N, vector<bool>(N, false));

    resultado = 0;
    dfs(Xi, Yi, N);

    cout << resultado << endl;

    return 0;
}
