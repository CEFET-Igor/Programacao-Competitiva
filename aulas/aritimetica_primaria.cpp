#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int calculateCarry(int num1, int num2) {
    int carry = 0;
    int carryCount = 0;
    
    vector<int> digits1, digits2;
    
    while (num1 > 0) {
        digits1.push_back(num1 % 10);
        num1 /= 10;
    }
    
    while (num2 > 0) {
        digits2.push_back(num2 % 10);
        num2 /= 10;
    }
    
    int i = 0;
    while (i < digits1.size() || i < digits2.size()) {
        int sum = carry;
        if (i < digits1.size()) sum += digits1[i];
        if (i < digits2.size()) sum += digits2[i];
        
        if (sum >= 10) {
            carry = 1;
            carryCount++;
        } else {
            carry = 0;
        }
        
        i++;
    }
    
    return carryCount;
}

int main(){

    vector<int> numeros;
    int n=-1, ant=-1;
    int carry;

    while (true){
        cin >> n;
        if (ant == 0 && n == 0) break;
        numeros.push_back(n);
        ant = n;
    }

    for(int i = 0; i < numeros.size()-1; i = i+2){
        carry = calculateCarry(numeros[i], numeros[i+1]);
        if(carry == 0){
            cout << "No carry operation." << endl;
        } else if(carry == 1){
            cout << "1 carry operation." << endl;
        } else {
            cout << carry << " carry operations." << endl;
        }
    }
    
}