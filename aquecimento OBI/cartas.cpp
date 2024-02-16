#include <iostream>
 
using namespace std;

int main() {
    int c1, c2, c3, c4, c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    if(c1 < c2 && c2 < c3 && c3 < c4 && c4 < c5) {
        cout << "C" << endl;
    } else if(c1 > c2 && c2 > c3 && c3 > c4 && c4 > c5) {
        cout << "D" << endl;
    } else {
        cout << "N" << endl;
    }
  return 0;
}
