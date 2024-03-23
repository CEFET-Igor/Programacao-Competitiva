#include <iostream>
#include <vector>

using namespace std;

int main() {

    while (true){

        int N;
        cin >> N;

        if (N == 0) break;

        vector<pair<int, int>> produtos;

        for (int i = 1; i <= N; i++){
            int V, P;
            cin >> V >> P;
            produtos.push_back(make_pair(V, P));
        }

        int peso;
        cin >> peso;

        

    }
    
}