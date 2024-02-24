#include <iostream>
#include <vector>

using namespace std;

int mdc(int a, int b) {
    for (int r {a % b}; r; a = b, b = r, r = a % b);
    return b;
}

int main() {
    int n, maxdc;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++)
        for(int j = 1; j < n; j++)
            if(v[i] == v[j]) continue;
            else{
                maxdc = mdc(v[i], v[j]);
                v[i] = maxdc;
                v[j] = maxdc;
            }
    cout << v[0] << endl;    
    return 0;
}