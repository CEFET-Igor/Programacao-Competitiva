/* 2466 - Sinuca */
#include <iostream>
#include <vector>

using namespace std;

vector<int> linhaSuperior(vector<int> base);

int main()
{
    int N;
    cin >> N;

    vector<int> base(N);

    for(int i = 0; i < N; ++i) {
        cin >> base[i];
    };

    for (int i = N; i > 0; i--){
        base = linhaSuperior(base);
    }

    if(base[0] == 1){
        cout << "preta" << endl;
    }
    else if (base[0] == -1){
        cout << "branca" << endl;
    }
}

vector<int> linhaSuperior(vector<int> base){
    int N = base.size();
    for (int i = 1; i < N; i++){
        base[i-1] = (base[i-1] == base[i]) ? 1 : -1;
    }
    base.pop_back();
    return base;    
};