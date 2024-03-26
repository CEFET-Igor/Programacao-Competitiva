#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool ehQuadradoPerfeito(int n) {
    int raiz = sqrt(n);
    return raiz * raiz == n;
}

int main() {

    int n;
    cin >> n;

    int raiz = sqrt(n);

    if (raiz * raiz == n){
        cout << "Quadrado perfeito" << endl;
        cout << n << endl;
        cout << raiz << endl;
    } else {
        cout << "Nao eh quadrado perfeito" << endl;
        double raiz = sqrt(n);
        int floorraiz = floor(raiz);
        cout << floorraiz * floorraiz << endl;
        cout << floorraiz << endl;
    }
    
}