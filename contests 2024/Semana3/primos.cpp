#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int first, last;
    cin >> first >> last;

    vector<int> primos;

    for (int i = first; i <= last; i++) {
        bool esPrimo = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            primos.push_back(i);
        }
    }

    for (int i = 0; i < primos.size(); i++) {
        cout << primos[i] << " ";
    }
    cout << endl;
    return 0;
}