/* 2464 - Decifra */
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string permutacao;
    getline(cin, permutacao);

    // Mapear as letras do alfabeto para a permutação inversível
    unordered_map<char, char> mapeamento;
    for (int i = 0; i < 26; ++i) {
        mapeamento['a' + i] = permutacao[i];
    }

    string frase_criptografada;
    getline(cin, frase_criptografada);

    // Descriptografar a frase
    string frase_descriptografada;
    for (char letra : frase_criptografada) {
        frase_descriptografada += mapeamento[letra];
    }

    cout << frase_descriptografada << endl;

    return 0;
}
