#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
typedef long long lint;

lint fatorial(int n){
    if ((n==1) || (n==0)){
        return 1;
    } else{
        return fatorial(n-1)*n;
    }
};


lint calcularPermutacaoComRepeticao(const string& str) {
    unordered_map<char, int> contador;
    
    // Conta a frequência de cada caractere na string
    for (char c : str) {
        contador[c]++;
    }

    lint resultado = fatorial(str.size());
    
    // Divide pelo fatorial de cada frequência
    for (const auto& pair : contador) {
        resultado /= fatorial(pair.second);
    }

    return resultado;
}


int main() {
    string str;
    cin >> str;

    cout << calcularPermutacaoComRepeticao(str) << endl;
    
    return 0;
}