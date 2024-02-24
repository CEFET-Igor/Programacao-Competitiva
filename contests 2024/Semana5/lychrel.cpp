#include <bits/stdc++.h>
using namespace std;

unsigned long long inverterNumero(unsigned long long numero) {
    unsigned long long inverso = 0;
    
    while (numero != 0) {
        inverso = inverso * 10 + numero % 10;
        numero /= 10;
    }
    
    return inverso;
}

bool ehPalindromo(unsigned long long numero) {
    unsigned long long inverso = inverterNumero(numero);
    return (numero == inverso);
}

int main(){

    unsigned long long n; cin >> n;

    bool ehLychrel = true;

    for(int i = 1; i <= 20; i++){
        unsigned long long inv = inverterNumero(n);
        unsigned long long r = n + inv;
        if(ehPalindromo(r)){
            ehLychrel = false;
            break;
        }
        n = r;
    }



    if(ehLychrel){
        cout << 1;
    }else{
        cout << 0;
    }



    return 0;
}