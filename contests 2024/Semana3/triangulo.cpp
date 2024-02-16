#include <iostream>
#include <cmath>

using namespace std;

bool eTrianguloRetangulo(int xa, int ya, int xb, int yb, int xc, int yc) {
    int lado1 = (xb - xa) * (xb - xa) + (yb - ya) * (yb - ya); 
    int lado2 = (xc - xb) * (xc - xb) + (yc - yb) * (yc - yb); 
    int lado3 = (xc - xa) * (xc - xa) + (yc - ya) * (yc - ya); 

    return lado1 + lado2 == lado3 || lado1 + lado3 == lado2 || lado2 + lado3 == lado1;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int xa, ya, xb, yb, xc, yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;

        if (eTrianguloRetangulo(xa, ya, xb, yb, xc, yc)) {
            cout << "sim" << endl;
        } else {
            cout << "nao" << endl;
        }
    }

    return 0;
}