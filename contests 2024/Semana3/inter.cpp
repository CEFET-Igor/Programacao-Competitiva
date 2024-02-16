#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    double n1, n2, n3;

    for (int i=0; i<n; i++) {
        cin >> n1 >> n2 >> n3;

        if (n1 >= n3 || n1 <= n2 ) {
            cout << "False" << endl;
        } else {
            cout << "True" << endl;
        }
    }

    return 0;
}