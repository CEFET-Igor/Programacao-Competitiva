#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main(){

    int n; cin >> n;

    ull r = 10;
    n--;

    for(int i = 1; i <= n; i++){
        r *= static_cast<ull>(9);
    }

    cout << r << endl;


    return 0;
}