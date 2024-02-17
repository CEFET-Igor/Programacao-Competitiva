/* I - Cofre  */
#include <iostream>

using namespace std;

typedef long long lint;

int main(){

    int N, V;
    cin >> N >> V;

    lint result = 1;
    for (int i = 0; i < N; i++){
        result *= V;
    }
    cout << result << endl;
}