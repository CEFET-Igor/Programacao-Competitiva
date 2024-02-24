#include <iostream>

using namespace std;

int main() {
    int A, B, M;
    while (cin >> A >> B >> M)
    {
        if (A == 0 and B == 0 and M == 0){
            break;
        }
        cout << A << " + " << B << " mod " << M << " = " << (A + B) % M << endl;
        cout << A << " - " << B << " mod " << M << " = " << (A - B) % M << endl;
        cout << A << " * " << B << " mod " << M << " = " << (A * B) % M << endl;
    }
    return 0;
}