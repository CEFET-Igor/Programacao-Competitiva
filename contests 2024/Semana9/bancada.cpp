#include <iostream>
#include <algorithm>

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
    int W, X, Y, Z;
    while (cin >> W >> X >> Y >> Z) {

        if (W == 0 && X == 0 && Y == 0 && Z == 0) break;
        cout << mmc(mmc(mmc(W, X), Y), Z) << endl;
        
    }

}