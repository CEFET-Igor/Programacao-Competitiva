#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    int Q, V;
    cin >> Q >> V;

    vector<int> valores;

    for (int i = 0; i < Q; i++){
        int valor;
        cin >> valor;
        valores.push_back(valor);
    }

    int troco;

    for (int i = 0; i < Q; i++){
         
        for(int j = 0; j < Q; j++){
           if (valores[j] == valores[i]) continue;

       }
    }

}