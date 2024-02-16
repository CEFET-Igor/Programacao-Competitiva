#include <iostream>

using namespace std;
typedef long long lint;

lint arranjos(int n, int k) {
    lint resultado = 1;
    for (int i = n; i > n - k; i--) {
        resultado *= i;
    }
    return resultado;
}

lint combinacoes(int n, int k) {
    lint result = 1;
    for (int i = 1; i <= k; i++) {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    lint numeroArranjos = arranjos(n, k);
    cout << "Número de arranjos " << numeroArranjos << endl;

    lint numeroCombinacoes = combinacoes(n, k);
    cout << "Número de combinações " << numeroCombinacoes << endl;

    return 0;
}
