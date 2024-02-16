#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    vector<float> notas(4, 0);

    float n;
    for(int i = 0; i < 4; i++){
        cin >> notas[i];
    }

    float media = (notas[0]*2 + notas[1]*3 + notas[2]*4 + notas[3]) / 10;

    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if (media >= 7.0)
        cout << "Aluno aprovado." << endl;
    else if (media < 5.0)
        cout << "Aluno reprovado." << endl;
    else {
        cout << "Aluno em exame." << endl;

        cin >> n;
        cout << "Nota do exame: " << fixed << setprecision(1) << n << endl;
        media = (media + n) / 2;

        if (media >= 5.0)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;

        cout << "Media final: " << fixed << setprecision(1) << media << endl;
    }   
    return 0;
}
