#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        
        double A, B, C, D;
        cin >> A >> B >> C >> D;

        double resp = (D-B)/(C-A);
        double truncado = floor(resp * 100.0) / 100.0;

        cout << fixed << setprecision(2) << truncado << endl;
    }
    
    return 0;
}