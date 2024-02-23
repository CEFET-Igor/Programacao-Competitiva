/* 3048 - Sequência Secreta */
#include <iostream>

using namespace std;

int main(){
    int N, cont = 1;
    cin >> N;
    int V[N];
    for( int i = 0; i < N; i++ ) {
        cin >> V[i];
        if( i > 0 && V[i] != V[i-1] ) {
            cont++;
        }
    }
    
    cout << cont << endl;
    
    return 0;
}