#include <iostream>
#include <string>

using namespace std;

int main() {
  int input;
  cin >> input;
  cin.ignore();

  string result;

  for (int i = 0; i < input; i++) {
    string frase;
    getline(cin, frase);

    result += frase + " ";
  }

  cout << result << endl;
  return 0;
}
