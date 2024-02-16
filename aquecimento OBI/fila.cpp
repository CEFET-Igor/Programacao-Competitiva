#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> fila(n, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> fila[i];
    }

    int m;
    cin >> m;

    vector<int> sairam(m, 0);

    for (int i = 0; i < m; i++) {
        cin >> sairam[i];
        int pos = find(fila.begin(), fila.end(), sairam[i]) - fila.begin();
        fila.erase(fila.begin() + pos);
    }

    for (int i = 0; i < fila.size(); i++) {
        cout << fila[i] << " ";
    }
    cout << endl;

    return 0;
}