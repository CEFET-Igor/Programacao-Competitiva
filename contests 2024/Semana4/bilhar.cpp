/* L - Mundo do Bilhar */
#include <iostream>

using namespace std;
typedef long long lint;

int main() {

    lint n;
    cin >> n;

    lint result = n;
    while (n!=0){
        n--;
        result += n;
    }
    
    cout << result << endl;
    return 0;
}