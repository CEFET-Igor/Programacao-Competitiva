#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string frase;
  getline(cin, frase);

  string result;

  result += frase[0];

  for (int i = 1; i < frase.size(); i++) {
    if (frase[i - 1] != frase[i]) {
      result += frase[i];
    }
  }

  cout << result << endl;

  return 0;
}