#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string str;
    getline(cin, str);

    vector<int> numeros;

    int numeroAtual = 0;

    for (char c : str) {
        if (std::isdigit(c)) {
            numeroAtual = numeroAtual * 10 + (c - '0'); // Constrói o número
        } else if (c == '+') {
            numeros.push_back(numeroAtual); // Adiciona o número ao vetor
            numeroAtual = 0; // Reseta o número atual
        }
    }

    // Adiciona o último número, se houver
    if (numeroAtual != 0) {
        numeros.push_back(numeroAtual);
    }

    // Exibe os números do vetor
    for (int elem : numeros) {
        std::cout << elem << " ";
    }

    return 0;
}

