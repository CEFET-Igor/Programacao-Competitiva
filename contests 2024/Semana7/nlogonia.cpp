#include <bits/stdc++.h>

using namespace std;

const int INF = INT_MAX;

int fordFulkerson(vector<vector<int>>& grafo, int fonte, int sumidouro) {
    int N = grafo.size();
    vector<vector<int>> residual(N, vector<int>(N, 0));


    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            residual[i][j] = grafo[i][j];

    vector<int> parent(N);
    int maxFlow = 0;

    while (true) {
        fill(parent.begin(), parent.end(), -1);
        queue<pair<int, int>> fila;
        fila.push({fonte, INF});
        parent[fonte] = fonte;

        while (!fila.empty()) {
            int u = fila.front().first;
            int capacidadeMinima = fila.front().second;
            fila.pop();

            for (int v = 0; v < N; ++v) {
                if (parent[v] == -1 && residual[u][v] > 0) {
                    parent[v] = u;
                    int novaCapacidade = min(capacidadeMinima, residual[u][v]);
                    fila.push({v, novaCapacidade});

                    if (v == sumidouro) {
                        maxFlow += novaCapacidade;
                        int atual = v;

                        while (atual != fonte) {
                            int anterior = parent[atual];
                            residual[anterior][atual] -= novaCapacidade;
                            residual[atual][anterior] += novaCapacidade;
                            atual = anterior;
                        }
                    }
                }
            }
        }

        if (parent[sumidouro] == -1) {
            break;
        }
    }

    return maxFlow;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> grafo(N, vector<int>(N, 0));

    for (int i = 0; i < M; ++i) {
        int Xi, Yi, Pi;
        cin >> Xi >> Yi >> Pi;

        grafo[Xi - 1][Yi - 1] += Pi;
    }

    int fonte = 0; 
    int sumidouro = N - 1; 

    int maiorPopulacao = fordFulkerson(grafo, fonte, sumidouro);

    cout << maiorPopulacao;

    return 0;
}
