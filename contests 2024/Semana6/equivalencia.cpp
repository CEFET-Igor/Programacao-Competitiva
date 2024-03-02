#include <iostream>

using namespace std;

int main(){
    int a, b, m;
    cin >> a >> b >> m;

    if(a%m == b%m) cout << 1 << endl;
    else cout << 0 << endl;
}