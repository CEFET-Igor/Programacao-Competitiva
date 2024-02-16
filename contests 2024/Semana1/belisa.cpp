#include <iostream>
#include <algorithm>
#include <string>

int main() {

    std::string strnome1;
    std::string strnome2;

    getline(std::cin, strnome1);
    getline(std::cin, strnome2);

    // Verificar se strPermutada é uma permutação de strOriginal
    if (std::is_permutation(strnome1.begin(), strnome1.end(), strnome2.begin())) {
        std::cout << "sim" << std::endl;
    } else {
        std::cout << "nao" << std::endl;
    }

    return 0;
}
