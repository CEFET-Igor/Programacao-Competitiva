#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, j1, j2;
    cin >> n;

    vector<int> mdc;

    for(int i = 0; i < n; i++){
        cin >> j1 >> j2;
        mdc.push_back(__gcd(j1, j2));
    }

    for(int n : mdc){
        cout << n << endl;
    }

    return 0;
}
