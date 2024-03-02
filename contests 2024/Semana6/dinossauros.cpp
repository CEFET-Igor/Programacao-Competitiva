#include<iostream>
#include<vector>

using namespace std;
vector<pair<int, int>> dinossauros;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int p, u;
        cin >> p >> u;
        dinossauros.push_back(make_pair(p, u));
    }

    int maximo = 0;
    int primeiro, ultimo;
    for (auto dino : dinossauros){
        primeiro = dino.first;
        ultimo = dino.second;
        int contador = 0;
        for (int i = 0; i < dinossauros.size(); i++){
            if (dinossauros[i].first >= primeiro && dinossauros[i].first <= ultimo){
                contador++;
            }
        }
        if (contador > maximo){
            maximo = contador;
        }
        cout << contador << endl;
    }
    cout << maximo << endl;

    return 0;
}