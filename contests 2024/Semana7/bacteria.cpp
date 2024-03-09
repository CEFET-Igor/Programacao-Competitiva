#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    vector<unordered_set<int>> graph(N + 1);

    // grafo
    for (int i = 0; i < C; ++i) {
        int P, I;
        cin >> P >> I;

        for (int j = 0; j < I; ++j) {
            int Xi;
            cin >> Xi;
            graph[P].insert(Xi);
        }
    }

    unordered_set<int> todas_as_pessoas;
    for (int i = 1; i <= N; ++i) {
        todas_as_pessoas.insert(i);
    }

    for (int i = 1; i <= N; ++i) {

        for (int j = 1; j <= N; ++j) {
            
            if (graph[j].count(i) > 0) {
                todas_as_pessoas.erase(i);
                break;
            }
        }
    }

   
    cout << *todas_as_pessoas.begin() << std::endl;

    return 0;
}
