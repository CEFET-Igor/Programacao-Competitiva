/* 2451 - PacMan */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    string linha;
    int cont = 0, maior = 0;

    for (int i = 0; i < N; ++i) {
        cin >> linha;
        if(i%2 == 0){
            for (int j = 0; j < N; ++j) {
                if (linha[j] == 'o'){
                    cont++;
                } else if(linha[j] == 'A'){
                    if(cont > maior){
                        maior = cont;
                    }
                    cont = 0;
                }
            }
        }else{
            for (int j = 0; j < N; ++j) {
                if (linha[N-j-1] == 'o'){
                    cont++;
                } else if(linha[N-j-1] == 'A'){
                    if(cont > maior){
                        maior = cont;
                    }
                    cont = 0;
                }
            }     
        }
    }
    
    if(cont > maior){
        maior = cont;
    } 

    cout << maior << endl;

    return 0;
}