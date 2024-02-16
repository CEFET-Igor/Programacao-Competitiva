#include <iostream>
#include <cmath>

using namespace std;

int fatorial1(int n){
    if ((n==1) || (n==0)){
        return 1;
    } else{
        return fatorial1(n-1)*n;
    }
};

int fatorial2(int n){
    return tgamma(n+1);
};

int main(void){

    int num, fat=0, y;
    cin>>num;
    
    y=num-1;
    fat=num*y;
    y--;

    while(y>0){
        fat = fat * y;
        y--;
    }

    cout << "Fatorial: " << fat << endl;
    cout << "Fatorial1: " << fatorial1(num) << endl;
    cout << "Fatorial2: " << fatorial2(num) << endl;
    return 0;
}

