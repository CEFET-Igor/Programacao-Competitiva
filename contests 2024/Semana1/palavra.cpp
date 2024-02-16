#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string frase;
  getline(cin, frase);
  int deslocamento;
  cin >> deslocamento;

  string frase_criptografada = "";

  for (char caracter : frase) {
    if (isalpha(caracter)) {
      char base = isupper(caracter) ? 'A' : 'a';
      frase_criptografada +=
          static_cast<char>((caracter - base + deslocamento + 26) % 26 + base);
    } else {
      frase_criptografada += caracter;
    }
  }

  cout << frase_criptografada << endl;

  return 0;
}
