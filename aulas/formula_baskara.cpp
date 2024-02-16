#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout.precision(5);
    double a, b, c, delta;
    cin >> a >> b >> c;

    delta = b*b - 4*a*c;

    if(delta < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    }else{
        cout << fixed;
        cout << "R1 = " << (-b + sqrt(delta))/(2*a) << endl;
        cout << "R2 = " << (-b - sqrt(delta))/(2*a) << endl;
    }

    return 0;
}