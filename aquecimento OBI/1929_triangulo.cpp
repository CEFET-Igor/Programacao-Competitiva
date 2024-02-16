/* 1929 - Triângulo1 */
#include <iostream>
#include <vector>
 
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    vector<vector<int>> opcoes = {
        {A, B, C},
        {A, B, D},
        {A, C, D},
        {B, C, D}
    };

    for(const auto& combinacao : opcoes) {
        if(
            abs(combinacao[0] - combinacao[1]) <  combinacao[2] && 
            combinacao[0] + combinacao[1] >  combinacao[2] &&

            abs(combinacao[1] - combinacao[2]) <  combinacao[0] &&
            combinacao[1] + combinacao[2] >  combinacao[0] &&

            abs(combinacao[0] - combinacao[2]) <  combinacao[1] &&
            combinacao[0] + combinacao[2] >  combinacao[1]) {
            cout << "S" << endl;
            return 0;
        }
    }
    cout << "N" << endl;

  return 0;
}
