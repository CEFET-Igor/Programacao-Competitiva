/* Problema estudioso */
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <limits>

using namespace std;

int contadorComparacoes(string texto){
    int contador = 0;
    for(int i = 0; i < texto.size(); i++){
        if(texto[i] == ' '){
            contador++;
        }
    }
    return contador;
}

int main(){
    int N;
    cin >> N;

    vector<int> num_comparacoes;

    int contador, conparacoes;

    for(int i = 0; i < N; i++){

        string texto;
        getline(cin, texto);

        if (texto.size() == 1){
            num_comparacoes.push_back(0);
        }
        else{
            conparacoes = contadorComparacoes(texto);
            num_comparacoes.push_back(conparacoes);
        }


    }

    return 0;
}

