#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
typedef long long lint;

/**
 * Verifica se uma string é uma permutação de outra.
 * 
 * @param str1 A primeira string.
 * @param str2 A segunda string.
 * @return true se str1 é uma permutação de str2, false caso contrário.
 */
bool e_permutacao(string str1, string str2) {
    if(is_permutation(str1.begin(), str1.end(), str2.begin())) {
        return true;
    }
    return false;
}


/**
 * Função que gera todas as permutações de uma string e as imprime na saída padrão.
 * A função recebe uma string como parâmetro e utiliza o algoritmo de permutação 
    para gerar todas as combinações possíveis.
 * A função também conta e imprime o número total de permutações geradas.
 */
void permutacoes(string str) {
    sort(str.begin(), str.end());
    int contador = 0;
    do {
        cout << str << endl;
        contador++;
    } while(next_permutation(str.begin(), str.end()));
    cout << "Número de permutações: " << contador << endl;
}


lint fatorial(int n){
    if ((n==1) || (n==0)){
        return 1;
    } else{
        return fatorial(n-1)*n;
    }
};

lint calcularPermutacaoComRepeticao(string str) {
    lint resultado = fatorial(str.size());
    for (int i = 0; i < str.size(); i++) {
        int contador = 1;
        for (int j = i + 1; j < str.size(); j++) {
            if (str[i] == str[j]) {
                contador++;
            }
        }
        resultado /= fatorial(contador);
    }
    return resultado;
}



int main() {
    string str1, str2;
    cin >> str1 >> str2;

    if(e_permutacao(str1, str2)) {
        cout << "É permutação" << endl;
    } else {
        cout << "Não é permutação" << endl;
    }

    cout << "Número de permutações com repetição: " << calcularPermutacaoComRepeticao("missisippi") << endl;
    
    return 0;
}