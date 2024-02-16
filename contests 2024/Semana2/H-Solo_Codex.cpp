/* Problema Naipe */
#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, string> naipes ={
        {0, "Paus"},
        {1, "Ouro"},
        {2, "Coração"},
        {3, "Espada"}
    };

    map<int, string> cartas ={
        {1, "Ás"},
        {11, "Valete"},
        {12, "Dama"},
        {13, "Rei"}
    };

    int N, C;
    cin >> N >> C;

    string naipe = naipes[N];
    if (C > 1 && C < 11) {
        cout << C << " de " << naipe << endl;
        return 0;
    }

    string carta = cartas[C];

    cout << carta << " de " << naipe << endl;
    return 0;
}
