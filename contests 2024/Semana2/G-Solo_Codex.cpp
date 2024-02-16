/* Problema Cassino */
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<sstream>

using namespace std;

int main(){

    map<int, string> cartas ={
        {1, "A"},
        {11, "J"},
        {12, "Q"},
        {13, "K"}
    };

    string numeros;
    vector<int> numeros2;
    int num;

    getline(cin, numeros);

    stringstream ss(numeros);

    while (ss >> num) {
        numeros2.push_back(num);
    }

    sort(numeros2.begin(), numeros2.end());

    for(int n : numeros2){
        if (n == 1 || n > 10) {
            cout << cartas[n] << " ";
            continue;
        }
        else{
            cout << n << " ";
        }
    }

    cout << endl;

    return 0;
}