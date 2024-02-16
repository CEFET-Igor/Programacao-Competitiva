#include <iostream>

using namespace std;

int main() {
   
    int aposta[6], sorteio[6], acertos = 0;

    for (int i = 0; i < 6; i++) {
        cin >> aposta[i];
    }

    for (int i = 0; i < 6; i++) {
        cin >> sorteio[i];
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (aposta[i] == sorteio[j]) {
                acertos++;
            }
        }
    }

    switch (acertos) {
        case 3:
            cout << "terno" << endl;
            break;

        case 4:
            cout << "quadra" << endl;
            break;

        case 5:
            cout << "quina" << endl;
            break;

        case 6:
            cout << "sena" << endl;
            break;

        default:
            cout << "azar" << endl;
            break;
    }

    return 0;
}
