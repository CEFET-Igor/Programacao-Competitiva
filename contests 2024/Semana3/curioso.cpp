#include <iostream>
#include <iomanip>

using namespace std;

double calcularValorFinal(double I, double L, int N) {
    return I + (N - 1) * L;
}

int main() {
    double I, L;
    int N;

    cin >> I >> L >> N;

    double valorFinal = calcularValorFinal(I, L, N);

    cout << fixed << std::setprecision(1) << valorFinal << endl;

    return 0;
}