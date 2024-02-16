#include <iostream>
#include <cmath>

using namespace std;

int first_non_zero_digit_factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        double sum = 0;
        for (int i = 2; i <= n; i++) {
            sum += log10(i);
        }
        return (int)pow(10, sum - (int)sum);
    }
}

int main() {
    int n, instance = 1;
    
    while (cin >> n) {
        cout << "Instancia " << instance++ << endl;
        cout << first_non_zero_digit_factorial(n) << endl << endl;
    }
    
    return 0;
}
