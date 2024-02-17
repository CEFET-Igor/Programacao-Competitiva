/* G - Combina */
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
#include <set>

using namespace std;

typedef long long lint;

void escrevePerrmutação(vector<string> combination) {
    for (const auto& e : combination) {
        cout << e << " ";
    }
    cout << endl;
}

int main() {
    string str;
    getline(cin, str);

    stringstream ss(str);
    string element;

    vector<string> elements;
    while (getline(ss, element, ',')) {
        elements.push_back(element);
    };

    for(int i = 0; i < elements.size(); i++){
        for(int j = 1; j < elements.size(); j++){
            if (i == 0) continue; 
        }

    }

    {
        cout << elements[0] << endl;
        cout << elements[1] << endl;
        cout << elements[2] << endl;
        cout << elements[0] << "," << elements[1];
        cout << elements[0] << "," << elements[2];
        cout << elements[1] << "," << elements[2];
        cout << elements[0] << "," << elements[1] << "," << elements[2];
    }

    return 0;
}


#include <iostream>
#include <vector>

// Função recursiva para gerar todas as combinações possíveis
void generateCombinations(const std::vector<std::string>& elements, std::vector<std::string>& currentCombination, int index) {
    if (index == elements.size()) {
        // Imprime a combinação atual
        for (int i = 0; i < currentCombination.size(); ++i) {
            std::cout << currentCombination[i];
            if (i < currentCombination.size() - 1) {
                std::cout << ",";
            }
        }
        std::cout << std::endl;
        return;
    }

    // Caso atual: incluir o elemento na combinação
    currentCombination.push_back(elements[index]);
    generateCombinations(elements, currentCombination, index + 1);

    // Caso alternativo: não incluir o elemento na combinação
    currentCombination.pop_back();
    generateCombinations(elements, currentCombination, index + 1);
}

int main() {
    std::vector<std::string> elements; // Seu vetor com 40 elementos

    // Preencha seu vetor com 40 elementos aqui...

    // Exemplo com 3 elementos apenas para demonstração
    elements.push_back("52");
    elements.push_back("3");
    elements.push_back("11");

    // Chama a função para gerar todas as combinações possíveis
    std::vector<std::string> currentCombination;
    generateCombinations(elements, currentCombination, 0);

    return 0;
}