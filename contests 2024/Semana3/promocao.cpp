#include <iostream>
#include <iomanip>

using namespace std;

double calcularValorTotal(double valorConta, int idadeCliente) {
    double valorTotal = valorConta;

    if (idadeCliente <= 5) {
        valorTotal *= 0.5;
    } else if (idadeCliente < 18) {
        valorTotal *= 0.95;
    } else if (idadeCliente >= 60) {
        valorTotal *= 0.85;
    } else {
        valorTotal *= 1.1;
    }

    return valorTotal;
}

int main() {
    double valorConta;
    int idadeCliente;

    cin >> valorConta >> idadeCliente;

    double valorTotal = calcularValorTotal(valorConta, idadeCliente);

    cout << fixed << setprecision(2) << valorTotal << endl;

    return 0;
}
