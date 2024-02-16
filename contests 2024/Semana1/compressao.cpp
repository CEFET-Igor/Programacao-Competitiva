#include <iostream>
#include <string>
#include <sstream>
 
using namespace std;

int main() {
    string palavra;
    getline(cin, palavra);

    int contador = 0;

    for( int i=0; i < palavra.length()-1; i++){
        if (palavra[i] == palavra[i+1]){
            contador++;
        }
        else{
            if (contador + 1 > 2){
                cout << palavra[i] << contador+1;
                contador = 0;
            }
            else{
                for (int j = 0; i < contador; j++){
                    cout << palavra[i];
                }
                contador = 0;
            }
        }
    }
}
