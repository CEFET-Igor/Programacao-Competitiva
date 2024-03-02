#include <iostream>

using namespace std;

int mmc(int a, int b) {
    int m = a, n = b;
    while (m != n) {
        if (m < n) m += a;
        else n += b;
    }
    return m;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << mmc(mmc(a, b), c) << endl;
    return 0;
}