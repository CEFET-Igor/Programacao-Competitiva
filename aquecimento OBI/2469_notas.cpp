/* 2469 - Notas */
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> notas(n);
    for(int i = 0; i < n; i++) {
        cin >> notas[i];
    }

    sort(notas.begin(), notas.end());

    int mais_frequente = notas[0];
    int frequencia = 0, frequencia_maxima = 0; 

    for (int i = 0; i < n; i++) {
        if (notas[i] == notas[i + 1]) {
            frequencia++;
        } else {
            if (frequencia >= frequencia_maxima) {
                frequencia_maxima = frequencia;
                mais_frequente = notas[i];
            }
            frequencia = 0;
        }
    }

    cout << mais_frequente << endl;


}
