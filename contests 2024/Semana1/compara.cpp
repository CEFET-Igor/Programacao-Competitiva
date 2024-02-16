#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string frase1;
  string frase2;

  getline(cin, frase1);
  getline(cin, frase2);

  if (frase1 == frase2) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
