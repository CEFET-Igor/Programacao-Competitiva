/* 2449 - Fechadura */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> altura_dos_pinos(N, 0);

    for (int i = 0; i < N; ++i) {
        cin >> altura_dos_pinos[i];
    }

    int total = 0;
    for (int i = 1; i < N; i++) {
        if (M >= altura_dos_pinos[i - 1])
            altura_dos_pinos[i] += M - altura_dos_pinos[i - 1];
        else
            altura_dos_pinos[i] -= altura_dos_pinos[i - 1] - M;
        
        total += abs(M - altura_dos_pinos[i - 1]);
    }

    cout << total << endl;

}
