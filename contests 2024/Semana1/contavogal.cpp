#include <iostream>
#include <string>
#include <sstream>
 
using namespace std;

int main() {
    string palavra;
    getline(cin, palavra);

    int contador = 0;

    for(char caracteres : palavra){
        if (caracteres == 'a' || caracteres == 'e' || caracteres == 'i' || caracteres == 'o' || caracteres == 'u'
        || caracteres == 'A' || caracteres == 'E' || caracteres == 'I' || caracteres == 'O' || caracteres == 'U'){
            contador++;
        }
    }

    cout << contador << endl;
}
