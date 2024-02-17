#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool areAnagrams(const string& seq1, const string& seq2) {
    if (seq1.length() != seq2.length()) {
        return false;
    }

    unordered_map<char, int> freqMap;

    // Conta o número de ocorrências de cada base na primeira sequência
    for (char base : seq1) {
        freqMap[base]++;
    }

    // Decrementa o número de ocorrências de cada base na segunda sequência
    for (char base : seq2) {
        freqMap[base]--;
    }

    // Verifica se os contadores são todos iguais a zero
    for (const auto& pair : freqMap) {
        if (pair.second != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int X;
    cin >> X;

    for (int i = 0; i < X; ++i) {
        string seq1, seq2;
        cin >> seq1 >> seq2;

        // Verifica se as sequências são anagramas e imprime o resultado
        if (areAnagrams(seq1, seq2)) {
            cout << "sim\n";
        } else {
            cout << "nao\n";
        }
    }

    return 0;
}