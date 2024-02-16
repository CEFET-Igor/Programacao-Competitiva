#include <algorithm>
#include <iostream>
#include <string>

int main() {
  int N;
  std::cin >> N;
  std::cin.ignore(); 

  for (int i = 0; i < N; ++i) {
    std::string mensagem;
    std::getline(std::cin, mensagem);

    int meio = mensagem.size() / 2;

    std::reverse(mensagem.begin(), mensagem.begin() + meio);


    std::reverse(mensagem.begin() + meio, mensagem.end());

    std::cout << mensagem << std::endl;
  }

  return 0;
}