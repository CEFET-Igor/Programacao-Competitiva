#include <iostream>
#include <string>
#include <sstream>
 
using namespace std;

int main() {
    string nome;
    getline(cin, nome);

    int espacos = 0;

    for(char caracteres : nome){
        if (caracteres == ' '){
           espacos++;
        }
    }

    istringstream iss(nome);
    string palavra;

    int contador = 0;

    while (iss >> palavra)
    {
        palavra[0] = toupper(palavra[0]);
        if (contador == 0 || contador == espacos){
            cout << palavra;
        }
        else if (palavra.length() > 2)
        {
            cout << palavra[0] << ". ";
        }
        contador++;
    };
    cout << endl;
}
