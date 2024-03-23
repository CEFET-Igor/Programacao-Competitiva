#include <iostream>
#include <cmath>

using namespace std;

bool isPossible(int N, int V) {
    int contador = 0;

    while(V != 0){
        for (int i = 0; i < V; i++){
            contador += V;
            if (contador == N) break;
        }
        if (contador == N) break;
        V--;
    }

    if (contador == N) {
        return true;
    } else {
        return false;
    }
}

int main() {
    while (true) {

        int N, V;
        cin >> N >> V;

        if (N == 0 && V == 0) break;

        while (V > 0) {
            if (isPossible(N, V)) {
                cout << 1 << endl;
                break;
            } else {
                V--;
            }
            if (V == 0) {
                cout << 0 << endl;
            }
        }
    }
}