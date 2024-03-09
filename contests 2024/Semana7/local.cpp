#include <bits/stdc++.h>
using namespace std;

int main(){

    char c; string r;

    while(cin.get(c)){
        r += c;
    }

    for(int i = r.length() - 1; i >= 0; i--){
        cout << r[i];
    }


    return 0;
}