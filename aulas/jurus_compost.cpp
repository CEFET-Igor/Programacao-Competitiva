#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double C, i;
    int n;
    
    while (cin >> C >> i >> n) {
        double jurosSimples = C * i * n;
        double jurosComposto = C * pow(1 + i, n) - C;
        
        double diferencaValores = jurosSimples - jurosComposto;
        double diferencaJurosSimples = C + jurosSimples - C;
        double diferencaJurosComposto = C + jurosComposto - C;
        
        cout << fixed << setprecision(2);
        cout << "DIFERENCA DE VALOR = " << abs(diferencaValores) << endl;
        cout << "JUROS SIMPLES = " << diferencaJurosSimples << endl;
        cout << "JUROS COMPOSTO = " << diferencaJurosComposto << endl << endl;
    }
    
    return 0;
}
