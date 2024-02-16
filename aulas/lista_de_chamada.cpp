#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n_pessoas, escolhido;
    cin >> n_pessoas >> escolhido;

    vector<string> lista;

    for (int i = 0; i < n_pessoas; i++)
    {
        string nome;
        cin >> nome;
        lista.push_back(nome);
    }

    sort(lista.begin(), lista.end());

    cout << lista[escolhido-1] << endl;

    return 0;
}

