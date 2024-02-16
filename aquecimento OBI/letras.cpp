#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {

    char letra;
    cin >> letra;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');//lipar buffer

    string frase;
    getline(cin, frase);

    stringstream ss(frase);
    string palavra;
    int contador = 0, contador_letra = 0;
    
    while (ss >> palavra) {
        if (palavra.find(letra) != string::npos) {
            contador_letra++;
        }
        contador++;
    }

    float porcentagem = (static_cast<float>(contador_letra) / contador) * 100.0f;

    cout << fixed << setprecision(1) << porcentagem << endl;


    return 0;
}
