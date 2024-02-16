/*  Problema pesquisa
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <limits>

using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');//lipar buffer

    int teste;
    string nome_idade = "";

    vector<tuple<string, int>> lista;

    string nome;
    int idade, virgula;

    for (int i = 0; i < N; i++) {
        getline(cin, nome_idade);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//lipar buffer

        virgula = nome_idade.find(",");
        string nome = nome_idade.substr(0, teste);

        lista.push_back(make_tuple(nome, 5));

    }

    sort(lista.begin(), lista.end());

    for (auto i : lista) {
        cout << get<0>(i) << endl;
    }



    return 0;
}

