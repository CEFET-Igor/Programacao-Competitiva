#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string frase;
  getline(cin, frase);
  for (int i = 0; i < frase.size(); i++) {
    frase[i] = tolower(frase[i]);
  }

  int in, fin;
  in = 0;
  fin = frase.length() - 1;

  bool ind = false;
  while (in < fin) {

    if (frase[in] != frase[fin]) {

      ind = true;
      break;
    }

    in++;
    fin--;
  }

  if (ind) {
    cout << "não" << endl;
  } else {
    cout << "sim" << endl;
  }

  return 0;
}