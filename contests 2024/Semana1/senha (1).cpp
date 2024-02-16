#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string senha;
  cin >> senha;

  bool min = false;
  bool mai = false;
  bool num = false;
  bool tam = false;

  if (senha.length() >= 8) {
    tam = true;
  }

  for (int i = 0; i < senha.length(); i++) {

    if (islower(senha[i])) {
      min = true;
    } else if (isupper(senha[i])) {
      mai = true;
    } else if (isdigit(senha[i])) {
      num = true;
    }
  }

  if (num && mai && min && tam) {
    cout << "senha valida" << endl;
  } else {

    if (!tam) {
      cout << "minimo de 8 caracteres" << endl;
    }
    if (!mai) {
      cout << "letra maiuscula" << endl;
    }
    if (!min) {
      cout << "letra minuscula" << endl;
    }
    if (!num) {
      cout << "numero" << endl;
    }
  }

  return 0;
}
