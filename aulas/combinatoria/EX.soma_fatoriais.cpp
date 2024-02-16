#include <iostream>

using namespace std;

typedef long long lint;

lint fatorial(int n){
    if ((n==1) || (n==0)){
        return 1;
    } else{
        return fatorial(n-1)*n;
    }
};

int main(void){

    int num1, num2;
    while (cin >> num1 >> num2) {

        lint fat1 = fatorial(num1);
        lint fat2 = fatorial(num2);

        lint soma = fat1+fat2;

        cout<< soma <<endl;
    }
}

