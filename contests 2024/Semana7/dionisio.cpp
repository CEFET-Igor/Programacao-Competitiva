#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int distancia = abs(x1 - x2) + abs(y1 - y2);
    cout << distancia << endl;

    return 0;
}