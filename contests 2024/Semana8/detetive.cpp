#include <iostream>
#include <vector>
# include <algorithm>

using namespace std;

int maisSuspeito(vector<int> suspeitos){
    
    sort(suspeitos.begin(), suspeitos.end(), greater<int>());

    return suspeitos[1];
}

int main() {

    while (true) {

        int N;
        cin >> N;

        if (N == 0) break;

        vector<int> suspeitos;
        suspeitos.clear();

        for (int i = 0; i < N; i++){
            int suspeito;
            cin >> suspeito;
            suspeitos.push_back(suspeito);
        }

        auto it = find(suspeitos.begin(), suspeitos.end(), maisSuspeito(suspeitos));

        cout << distance(suspeitos.begin(), it) + 1 << endl;
    }
}