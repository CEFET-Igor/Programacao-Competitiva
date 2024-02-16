#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

bool compareTuples(tuple<string, int, int, int> a, tuple<string, int, int, int> b){
    
    auto [nome_a, ouro_a, prata_a, bronze_a] = a;
    auto [nome_b, ouro_b, prata_b, bronze_b] = b;

    if (ouro_a == ouro_b){
        if (prata_a == prata_b){
            if (bronze_a == bronze_b){
                return nome_a < nome_b;
            }
            else{
                return bronze_a > bronze_b;
            }
        }
        else{
            return prata_a > prata_b;
        }
    }
    else{
        return ouro_a > ouro_b;
    }
}

int main()
{
    vector<tuple< string, int, int, int>> vetor;

    int n_paises;
    cin >> n_paises;

    for (int i = 0; i < n_paises; i++)
    {
        string nome;
        int ouro, prata, bronze;
        cin >> nome >> ouro >> prata >> bronze;
        vetor.push_back(make_tuple(nome, ouro, prata, bronze));
    }

    sort(vetor.begin(), vetor.end(),compareTuples);
    for(auto[nome,ouro,prata,bronze]:vetor){
       cout << nome << ' ' << ouro << ' ' << prata << ' ' << bronze << endl;
    }
    cout<<endl;
    return 0;
}

