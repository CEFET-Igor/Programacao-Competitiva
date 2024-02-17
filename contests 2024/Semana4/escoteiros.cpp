#include <bits/stdc++.h>

using namespace std;


int main() {
    int n; cin >> n;
    unsigned long long r = 1;

    for(int i = 1; i <= n; i++){
        unsigned long long k; cin >> k;
        r *= k;
    }

    cout << r << endl;

    return 0;
}
