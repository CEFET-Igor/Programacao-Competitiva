#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m; cin >> n >> m;

    bool pode_participar = false;

    if(m >= 2019){
        pode_participar = true;
    }

    if(n >= 2000){
        pode_participar = true;
    }

    if(pode_participar){
        cout << "Sim";
    }else{
        cout << "Nao";
    }




    return 0;
}