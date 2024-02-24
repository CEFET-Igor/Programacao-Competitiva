#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int mmc(int a, int b) {
    return a / mdc(a, b) * b;
}

int main(){

    int n; cin >> n;

    int Nmmc = 1;

    for(int i = 0; i < n; i++){
        int  p; cin >> p;
        Nmmc = mmc(Nmmc, p);
    }

    cout << Nmmc;


    return 0;
}