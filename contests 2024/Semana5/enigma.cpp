#include <iostream>

using namespace std;
typedef long long lint;

lint powerMod(lint X, lint Y, lint Z) {
    lint res = 1;
    X = X % Z;
    while (Y > 0) {
        if (Y & 1) {
            res = (res * X) % Z;
        }
        Y = Y/2;
        X = (X * X) % Z;
    }
    return res;
}

int main() {
    lint X, Y, Z;
    cin >> X >> Y >> Z;
    cout << powerMod(X, Y, Z) << endl;
    return 0;
}