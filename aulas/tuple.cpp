#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

//Ordenar decrescente 
bool compareTuples(tuple<char, int, int> a, tuple<char, int, int> b) {
    auto [prio1_a, prio2_a, prio3_a] = a;

    auto [prio1_b, prio2_b, prio3_b] = b;
    // Equivalente às linhas comentadas abaixo
    // int prio1_b = get<0>(b);
    // int prio2_b = get<1>(b);
    // int prio3_b = get<2>(b);

    if (prio1_a == prio1_b) {
        if (prio2_a == prio2_b) {
            // Comparar o terceiro elemento se o primeiro e o segundo forem iguais
            return prio3_a > prio3_b;
        } else {
            // Comparar o segundo elemento se o primeiro for igual
            return prio2_a > prio2_b;
        }
    } else {
        // Comparar o primeiro elemento
        return prio1_a > prio1_b;
    }
}
int main()
{
    vector<tuple<char, int, int>> reformas;
    reformas.push_back(make_tuple('c', 2, 3));
    reformas.push_back(make_tuple('d', 7, 3));
    reformas.push_back(make_tuple('e', 9, 3));
    reformas.push_back(make_tuple('c', 2, 5));

    sort(reformas.begin(), reformas.end(),compareTuples);
    for(auto[a,b,c]:reformas){
        cout<<a<<' '<<b<<' '<<c<<' '<<endl;
    }
    cout<<endl;
    return 0;
}
