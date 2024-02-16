#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<sstream>

using namespace std;

int main(){

    string mapeados, consultados;
    vector<int> numeros_mapeados;
    vector<int> numeros_consultados;
    int num;

    getline(cin, mapeados);

    stringstream ss(mapeados);

    while (ss >> num) {
        numeros_mapeados.push_back(num);
    }

    getline(cin, consultados);

    stringstream ss2(consultados);

    while (ss2 >> num) {
        numeros_consultados.push_back(num);
    }

    sort(numeros_consultados.begin(), numeros_consultados.end());

    for (int i = 0; i < numeros_consultados.size(); i++) {
        if (find(numeros_mapeados.begin(), numeros_mapeados.end(), numeros_consultados[i]) != numeros_mapeados.end()) {
            cout << numeros_consultados[i] << " Está mapeado" << endl;
        }
        else {
            cout << numeros_consultados[i] << " Não está mapeado" << endl;
        }
    }



    return 0;
}