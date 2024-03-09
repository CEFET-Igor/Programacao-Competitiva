#include <iostream>
#include <bitset>

using namespace std;
typedef unsigned long long lint;


int distanciaHamming(lint x, lint y) {
    int distancia = 0;
    bitset<64> binarioX(x);
    bitset<64> binarioY(y);

    for (int i = 0; i < 64; ++i) {
        if (binarioX[i] != binarioY[i]) {
            distancia++;
        }
    }

    return distancia;
}

int main() {
    lint x, y;
    
    while (true) {
        cin >> x >> y;
        
        if (x == 0 && y == 0) break;

        cout << distanciaHamming(x, y) << endl;
    }

    return 0;
}